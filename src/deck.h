#ifndef DECK_H
#define DECK_H

#include <vector>
#include <string>
#include <ostream>
#include "card.h"

class Deck
{
private:
    std::vector<Card> cards;
    std::vector<int> prime;

public:
    Deck();
    ~Deck();

    // This function initializes the prime number vector
    void initializePrime();
    // This function initializes the deck
    void initializeDeck();
    // This function checks if a number is a prime number
    bool isPrime(int n);
    // This function will draw a card from the deck
    void drawCard();
    // This function is used for genertaing a random number
    // int randomNumber();
    // // This function fills the deck with cards
    // void fillDeck();
    // // This function returns the number of cards with the same number left
    // int remainingNumber(const Card &card);
    // // This function returns the number of cards with the same suit left
    // int remainingSuit(const Card &card);
    // // This function prints out the deck
    friend std::ostream &operator<<(std::ostream &out, const Deck &deck);
};
#endif