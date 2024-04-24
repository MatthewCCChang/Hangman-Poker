#include <string>
#include <string_view>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
#include "gameboard.h"
Gameboard::Gameboard()
{
    // fill the map
    deck = Deck();
    fillMap();
    hang = Hangman();
    play = Player();
}

Gameboard::~Gameboard()
{
    // nothing
}

void Gameboard::fillMap()
{
    rank = {
        {"A", 41},
        {"K", 37},
        {"Q", 31},
        {"J", 29},
        {"T", 23},
        {"9", 19},
        {"8", 17},
        {"7", 13},
        {"6", 11},
        {"5", 7},
        {"4", 5},
        {"3", 3},
        {"2", 2},
    };
    // int counter = 1;
    std::ifstream file("order.txt");
    std::string line;
    if (file.is_open())
    {
        // Read each line from the file and store it in the
        // 'line' variable.
        while (std::getline(file, line, '\n'))
        {
            std::stringstream ss(line);
            std::string word;
            int key = 0, counter = 0;
            int value = 1;
            while (ss >> word)
            {
                // std::cout << word << " " << counter << std::endl;
                if (!counter)
                {
                    key = std::stoi(word);
                }
                if (counter > 4 && counter < 10)
                {
                    value *= rank.find(word)->second;
                }
                counter++;
            }
            table[value] = key;
            // std::cout << key << " " << value << std::endl;
            // break;
        }

        // Close the file stream once all lines have been
        // read.
        file.close();
    }
    else
    {
        // Print an error message to the standard error
        // stream if the file cannot be opened.
        std::cerr << "Unable to open file!" << std::endl;
    }
}

// for opponent and self and flop/turn/river
std::vector<Card> Gameboard::showHand(int times)
{
    std::vector<Card> res;
    for (int i = 0; i < times; i++)
    {
        Card drawn = deck.drawCard();
        res.push_back(drawn);
    }
    return res;
}

void Gameboard::fillHands()
{
    this->user = showHand(2);
    this->opp = showHand(2);
}

void Gameboard::displayHand()
{
    std::cout << "Your Hand: ";
    for (const auto &card : this->user)
    {
        std::cout << "| " << card.getSuit() << " " << card.getRank() << " | ";
    }
    std::cout << "\n";
}

void Gameboard::displayOppHand()
{
    std::cout << "Opponent's Hand: ";
    for (const auto &card : this->opp)
    {
        std::cout << "| " << card.getSuit() << " " << card.getRank() << " | ";
    }
    std::cout << "\n";
}

void Gameboard::displayCommunity()
{
    std::cout << "Community Board: ";
    for (const auto &card : this->community)
    {
        std::cout << "| " << card.getSuit() << " " << card.getRank() << " | ";
    }
    std::cout << "\n"
              << std::endl;
}

void Gameboard::flop()
{
    this->community = showHand(3);
}

void Gameboard::turnRiver()
{
    this->community.push_back(showHand(1)[0]);
}

int Gameboard::evaluateHand()
{
    // two ptr in community vector, ecah time get three plus two from hand
    int p1 = 1, p2 = 1;
    int pmax = INT_MAX, omax = INT_MAX;
    for (const auto &card : user)
    {
        p1 *= card.getPrime();
    }
    for (const auto &card : opp)
    {
        p2 *= card.getPrime();
    }
    int len = community.size() - 2;
    for (int i = 0; i < len; i++)
    {
        // multiply by three common cards and see reference table for ranking, get max ranking
        int temp = community[i].getPrime() * community[i + 1].getPrime() * community[i + 2].getPrime();
        pmax = std::min(pmax, table[p1 * temp]); // get hand rank for user out of all
        omax = std::min(omax, table[p2 * temp]); // get hand rank for opp
    }
    userHandRank = pmax;
    oppHandRank = omax;
    // std::cout << userHandRank << "is user" << std::endl;
    // std::cout << oppHandRank << "is opp" << std::endl;
    if (pmax > omax)
    {
        return 1; // user larger = worse rank
    }
    else if (pmax == omax)
    {
        return 0; // same
    }
    else
    {
        return -1; // user less = better rank
    }
}

void Gameboard::displayResults(std::string round)
{
    if (round == "flop")
    {
        fillHands();
        std::cout << "-----Flop-----\n"
                  << std::endl;
        flop();
        // displayCommunity();
    }
    else if (round == "turn")
    {
        std::cout << "-----Turn-----\n"
                  << std::endl;
        turnRiver();
        // displayCommunity();
    }
    else
    {
        std::cout << "-----River-----\n"
                  << std::endl;
        turnRiver();
        // displayCommunity();
    }
    displayHand();
    displayCommunity();
    // get results of operations
    int res = evaluateHand();
    std::cout << "Results:" << std::endl;
    if (res)
    {
        std::cout << "Opponent wins this round\n"
                  << std::endl;
    }
    else if (!res)
    {
        std::cout << "Tie" << std::endl;
    }
    else
    {
        std::cout << "You win this round" << std::endl;
    }
}
// show result of everything and user's best combo option and result for each round
void Gameboard::start()
{
    displayResults(std::string("flop"));
    displayResults(std::string("turn"));
    displayResults(std::string("river"));
    // displayOppHand();
    guessOppHand();
}

void Gameboard::guessOppHand()
{
    // cout info then cin stuff
    std::string res;
    std::string s;
    while (!hang.isDead())
    {
        std::cout << "Please guess what the opponent hand contains in this format:\n  Ex: Diamonds A Spades T" << std::endl;
        std::getline(std::cin, res);
        while (!(res.find("Diamond") == 0) && !(res.find("Hearts") == 0) && !(res.find("Spades") == 0) && !(res.find("Clubs") == 0))
        {
            std::cout << "Please guess what the opponent hand contains in this format:  Ex: Diamonds A Spades T\n"
                      << std::endl;
            std::getline(std::cin, res);
        }
        std::stringstream ss(res);
        std::vector<std::string> contents;
        while (std::getline(ss, s, ' '))
        {
            contents.push_back(s);
        }
        int firstGuess = rank[contents[1]];  // the prime num
        int secondGuess = rank[contents[3]]; // the prime num
        std::cout << firstGuess << " " << secondGuess << std::endl;
        std::cout << opp[0].getPrime() << " " << opp[1].getPrime() << std::endl;
        std::cout << opp[0].getRank() << " " << opp[1].getRank() << std::endl;
        std::string firstSuit = contents[0];
        std::string secondSuit = contents[2];
        std::cout << opp[0].getSuit() << " " << opp[1].getSuit() << std::endl;
        std::cout << firstSuit << " " << secondSuit << std::endl;
        if (opp[0].getPrime() == firstGuess && opp[0].getSuit() == firstSuit && opp[1].getPrime() == secondGuess && opp[1].getSuit() == secondSuit)
        {
            std::cout << "You won! The opponent's hand was: " << opp[0].getSuit() << " " << opp[0].getRank() << " and "
                      << opp[1].getSuit() << " " << opp[1].getRank() << std::endl;
            play.addWin();
            break;
            // add player win by one
        }
        else
        {
            std::cout << "Uh oh! Wrong guess! Try again" << std::endl;
            hang.subtractLife();
            std::cout << "You have " << hang.getLife() << " lives left!" << std::endl;
            std::cout << hang << std::endl;
            // hangman tostring
        }
    }
    if (hang.isDead())
    {
        play.addLoss();
    }
    /*
        put in a different function called endGame()
    */
}

void Gameboard::endGame(bool win)
{
    std::string res = win ? "Won" : "Lost";
    std::cout << "You" + res + "! This was the opponent's hand: " << std::endl;
    displayOppHand();
    std::cout << "Would You like to play again? (y/n)" << std::endl;
    std::string answer;
    std::getline(std::cin, answer);
    // if yes, then call deck shuffle, fillHand
    if ((answer == "y") || (answer == "Y"))
    {
        deck.initializeDeck();
        fillHands();
    }
    else
    {
        // if no, print the stats
        std::cout << play << std::endl;
    }
}