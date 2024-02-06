#include "deck.h"
#include "card.h"

Deck::Deck()
{
    // initialize cards with four loops each running 13
    // 0000000000000000 0000000000000000 0000000000000000 0000000000000000
    // spades heart diamonds clubs
    initializeDeck();
};
Deck::~Deck(){};

void Deck::initializeDeck()
{
    for (int i = 0; i < 52; ++i)
    {
        int temp = 1;
        temp << i;
        this->cards.pop_back(Card(temp));
    }
}

void Deck::drawCard()
{
}
