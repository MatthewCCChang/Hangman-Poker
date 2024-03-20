#ifndef CARD_H
#define CARD_H

#include <string>
#include <ostream>

class Card
{
private:
    int id;
    bool available;

public:
    Card(int number);
    ~Card();
    std::string getSuit();
    int getNumber();
    bool isAvailable();
    friend std::ostream &operator<<(std::ostream &out, const Card &card);
};
#endif
