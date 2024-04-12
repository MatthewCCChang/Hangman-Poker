#ifndef HANGMAN_H
#define HANGMAN_H
#include <ostream>
#include <vector>

class Hangman
{
private:
    int lives;
    std::vector<std::string> hangman;
    int life;

public:
    Hangman();
    ~Hangman();
    void subtractLife();
    // void addLife();
    friend std::ostream &operator<<(std::ostream &out, const Hangman &hang);
};

#endif