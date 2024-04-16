#include "player.h"

Player::Player()
{
    win = 0;
    loss = 0;
}

Player::~Player()
{
    // nothing
}

void Player::addWin()
{
    win++;
}

void Player::addLoss()
{
    loss++;
}

std::ostream &operator<<(std::ostream &out, Player play)
{
    out << "Player Stats: " << play.win << " wins " << play.loss << " losses";
    return out;
}