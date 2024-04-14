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

void Card::changeAvailability()
{
    this->available = !this->available;
}

bool Card::isAvailable()
{
    return this->available;
}

std::string Card::getRank() const
{
    if (rank >= 1 && rank < 9)
    {
        return std::to_string(rank + 1);
    }
    else if (rank == 0)
    {
        return "A";
    }
    else if (rank == 10)
    {
        return "J";
    }
    else if (rank == 11)
    {
        return "Q";
    }
    else
    {
        return "K";
    }
}

std::string Card::getSuit() const
{
    return suit;
}

int Card::getPrime() const
{
    return prime;
}

std::ostream &operator<<(std::ostream &out, const Card &card)
{
    out << card.value << " " << card.suit << " " << card.rank << " " << card.prime;
    return out;
}
