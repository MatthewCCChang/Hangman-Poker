#include "deck.h"
#include <random>
#include <iostream>
#include <cassert>
#include "../../phevaluator/phevaluator.h"
Deck::Deck()
{
    // initialize cards with four loops each running 13
    // 0000000000000000 0000000000000000 0000000000000000 0000000000000000
    // spades heart diamonds clubs
    initializeDeck();
}
Deck::~Deck() {}

void Deck::initializeDeck()
{
    for (int i = 0; i < 52; ++i)
    {
        int temp = 1;
        temp << i;
        this->cards.push_back(Card(temp));
    }
}

void Deck::drawCard()
{
    std::random_device rd;
    std::uniform_int_distribution<int> number(0, 51); // then shift by that much
    int temp = number(rd);
    int rand = 1 << temp;
}
