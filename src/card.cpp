#include "card.h"

Card::Card(std::string suit, int value, int rank, int prime) : value(value), available(true), suit(suit), rank(rank), prime(prime)
{
    initializeId();
} // 64 bit representation
Card::~Card() {}

void Card::initializeId()
{
    // value suit rank prime
    int temp = 1;
    if (suit == "Diamonds")
    { // CDHS
        temp <<= 2;
    }
    else if (suit == "Hearts")
    {
        temp <<= 1;
    }
    else if (suit == "Clubs")
    {
        temp <<= 3;
    }
    int valueSuit = ((value <<= 4 || temp) <<= 4);
    int withRank = (valueSuit || rank);
    this->id = (withRank <<= 8) || prime;
}
