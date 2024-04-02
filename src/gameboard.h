#include <map>
#include <vector>
#include "deck.h"
#include "card.h"
// calculates the probability stuff here

/*
     Royal flush
    straight flush
    four of a kind
    full house
    flush
    straight
    three of a kind
    two pair
    pair
    high card

    gameboard calls Deck -> get five cards and calc product and store in map
*/
class Gameboard
{
public:
    Gameboard();
    ~Gameboard();
    // This function fills the table with the rank of the hand and the prime product as a pair
    void fillMap();
    // This function draws cards from the deck
    std::vector<Card> showHand(int times);
    // This function fills the opponent and the user's hands
    void fillHands();
    // This function displays the user's hand
    void displayHand();
    // This function displays the opp's hand
    void displayOppHand();
    // This function displays the community board
    void displayCommunity();
    // This function evaluates the hand and returns whether the user's hand is greater
    int evaluateHand();
    // This function fills the community board with three cards initially
    void flop();
    // This function adds to the community board
    void turnRiver();
    // This function returns the results of each round
    void displayResults(std::string round);
    // This function initializes the gameboard and starts the game
    void start();

private:
    std::map<int, int> table;
    std::vector<Card> user;
    std::vector<Card> opp;
    std::vector<Card> community;
    Deck deck;
    int userHandRank;
    int oppHandRank;
};
