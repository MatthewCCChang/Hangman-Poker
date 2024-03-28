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
    // This function draws cards for the user and the opponent
    std::vector<Card> showHand();

private:
    std::map<int, int> table;
    Deck deck;
};
