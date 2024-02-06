#include <string>
#include <ostream>

class Card
{
private:
    int id;

public:
    Card(int number) : id(number){};
    ~Card();
    std::string getSuit();
    int getNumber();
    friend std::ostream &operator<<(std::ostream &out, const Card &card);
};
