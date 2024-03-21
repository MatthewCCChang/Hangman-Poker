#include "deck.h"
#include <random>
#include <iostream>
#include <cassert>
#include "../../phevaluator/phevaluator.h"
Deck::Deck()
{
    // initialize cards with four loops each running 13
    // 0000 0000 0000 0000(card value) 0000(suit) 0000(rank0-12) 0000 0000(prime num)  all start from 2-A
    // spades heart diamonds clubs
    initializePrime();
    initializeDeck();
}
Deck::~Deck() {}

bool Deck::isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
        return true;
    }
}

void Deck::initializePrime()
{
    this->prime.push_back(2);
    for (int i = 3; i < 54; i++)
    {
        if (isPrime(i))
        {
            this->prime.push_back(i);
        }
    }
}

void Deck::initializeDeck()
{
    for (int i = 0; i < 13; ++i)
    {
        int temp = 1 << i;
        this->cards.push_back(Card(std::string("Diamonds"), temp, i + 2, prime[i]));
        this->cards.push_back(Card(std::string("Spades"), temp, i + 2, prime[i]));
        this->cards.push_back(Card(std::string("Hearts"), temp, i + 2, prime[i]));
        this->cards.push_back(Card(std::string("Clubs"), temp, i + 2, prime[i]));
    }
}

void Deck::drawCard()
{
    std::random_device rd;
    std::uniform_int_distribution<int> number(0, 51); // then shift by that much
    int temp = number(rd);
    int rand = 1 << temp;
}
