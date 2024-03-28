#include "deck.h"
#include <random>
#include <iostream>
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
    }
    return true;
}

void Deck::initializePrime()
{
    this->prime.push_back(2);
    for (int i = 3; i < 44; i++)
    {
        if (isPrime(i))
        {
            this->prime.push_back(i);
        }
    }
    std::cout << "reached here" << std::endl;
}

void Deck::initializeDeck()
{
    for (int i = 0; i < 13; ++i)
    {
        int temp = 1 << i;
        this->cards.push_back(Card(std::string("Diamonds"), temp, i, prime[i]));
        this->cards.push_back(Card(std::string("Spades"), temp, i, prime[i]));
        this->cards.push_back(Card(std::string("Hearts"), temp, i, prime[i]));
        this->cards.push_back(Card(std::string("Clubs"), temp, i, prime[i]));
    }
}

/*
    WORK ON THIS NEXT: draw cards and subtract from deck; make use of availability of cards
*/
Card Deck::drawCard()
{
    srand((unsigned)time(NULL));
    while (true)
    {
        int value = rand() % 13;
        int suit = rand() % 4;
        // getRank for each card then random number from 1-4 for suit
        int selected = value * 4 + suit;
        if (cards[selected].isAvailable())
        {
            cards[selected].changeAvailability();
            std::cout << "value: " << value << " suit: " << suit << std::endl;
            std::cout << cards[selected] << std::endl;
            return cards[selected];
        }
    }
}

std::ostream &operator<<(std::ostream &out, const Deck &deck)
{
    for (auto card : deck.cards)
    {
        out << card << "\n";
    }
    return out;
}