#include <string>
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
}

Gameboard::~Gameboard()
{
    // nothing
}

void Gameboard::fillMap()
{
    std::map<std::string, int> rank = {
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
    std::cout << "\n";
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
    std::cout << userHandRank << "is user" << std::endl;
    std::cout << oppHandRank << "is opp" << std::endl;
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
        std::cout << "flop" << std::endl;
        // displayHand();
        flop();
        // displayCommunity();
    }
    else if (round == "turn")
    {
        std::cout << "turn" << std::endl;
        turnRiver();
        // displayCommunity();
    }
    else
    {
        std::cout << "river" << std::endl;
        turnRiver();
        // displayCommunity();
    }
    // get results of operations
    int res = evaluateHand();
    if (res)
    {
        std::cout << "User has smaller hand" << std::endl;
    }
    else if (!res)
    {
        std::cout << "Tie" << std::endl;
    }
    else
    {
        std::cout << "Opponent has smaller hand" << std::endl;
    }
}
// show result of everything and user's best combo option and result for each round
void Gameboard::start()
{
    displayResults(std::string("flop"));
    displayResults(std::string("turn"));
    displayResults(std::string("river"));
}