#include <ostream>

class Hangman
{
private:
    int lives;

public:
    Hangman(){};
    ~Hangman();
    void subtractLife();
    void addLife();
    friend std::ostream &operator<<(std::ostream &out, const Hangman &hang);
};