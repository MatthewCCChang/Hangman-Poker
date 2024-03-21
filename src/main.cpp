#include <iostream>
#include <cassert>
// #include "../phevaluator/phevaluator.h"
#include "./card.h"
#include "./deck.h"

int main()
{
    Deck testing = Deck();
    std::cout << "testing" << std::endl;
}

/*
    Card: suit and number indicated by 64-bit number
    Deck: holds cards, need to be able to add or remove cards and shuffle
    Player: be able to see 2 cards, track games won
    Game: river has five cards, displays player's win rate after revelation of 3/1/1 cards against computer.
        Player has 5 chances to guess as in hangman(diff lvs? for guessing suit as well?)
    Hangman: 5 chances, each time incorrect subtracts one life. life=0 lose, if correct before that user wins



*/