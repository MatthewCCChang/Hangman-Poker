#ifndef CARD_H
#define CARD_H

#include <string>
#include <ostream>

class Card
{
private:
    // 0000 0000 0000 0000(card value) 0000(suit) 0000(rank0-12) 0000 0000(prime num)  all start from 2-A
    int value;
    bool available;
    std::string suit;
    int rank;
    int prime;
    int id; // what is used to retrieve from table

public:
    // This constructor initializes a card with the suit, value, rank and prime number
    Card(std::string suit, int value, int rank, int prime);
    // This is the destructor
    ~Card();
    // This initializes the id of a Card from the suit, value, rank, and prime attributes
    void initializeId();
    // std::string getSuit();
    // int getNumber();
    // bool isAvailable();
    friend std::ostream &operator<<(std::ostream &out, const Card &card);
};
#endif
