#include <vector>
#include <ostream>

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
    // This function prints out the deck
    friend std::ostream &operator<<(std::ostream &out, const Deck &deck);
};