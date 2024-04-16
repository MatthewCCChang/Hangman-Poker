#ifndef PLAYER_H
#define PLAYER_H
#include <ostream>

class Player
{
public:
    Player();
    ~Player();
    void addWin();
    void addLoss();
    friend std::ostream &operator<<(std::ostream &out, Player play);

private:
    int loss, win;
};

#endif