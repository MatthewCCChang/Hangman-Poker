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
    void fillrHands();

private:
    std::map<int, int> table;
    std::vector<Card> user;
    std::vector<Card> opp;
    Deck deck;
};
