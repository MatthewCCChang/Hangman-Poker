#include <vector>
#include <ostream>
#include "card.h"

class Deck
{
private:
    std::vector<int> cards;

public:
    Deck();
    ~Deck();

    // This function will draw a card from the deck
    void drawCard();
    // This function is used for genertaing a random number
    int randomNumber();
    // This function fills the deck with cards
    void fillDeck();
    // This function returns the number of cards with the same number left
    int remainingNumber(const Card &card);
    // This function returns the number of cards with the same suit left
    int remainingSuit(const Card &card);
    // This function prints out the deck
    friend std::ostream &operator<<(std::ostream &out, const Deck &deck);
};