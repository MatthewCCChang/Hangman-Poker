#include "hangman.h"

Hangman::Hangman()
{
    // create figure
    hangman = {
        R"(
  +---+
  |   |
      |
      |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
      |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
  |   |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========)"};
    // initialize life
    life = 0;
}

Hangman::~Hangman()
{
    // nothing
}

void Hangman::subtractLife()
{
    // subtract a life
}

std::ostream &operator<<(std::ostream &out, const Hangman &hang)
{
    // print out figureine
    out << hang.hangman[hang.life];
    return out;
}