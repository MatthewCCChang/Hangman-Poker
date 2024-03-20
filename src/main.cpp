#include <iostream>
#include <cassert>
#include "../phevaluator/phevaluator.h"
#include "poker/card.h"
#include "poker/deck.h"

int main()
{
    phevaluator::Rank rank1 = phevaluator::EvaluateCards("9c", "4c", "4s", "9d", "4h");
    phevaluator::Rank rank2 = phevaluator::EvaluateCards("8c", "7c", "6s", "5d", "4s");

    assert(rank1.value() == 292);
    std::cout << "The rank of the hand in player 1 is " << rank1.value() << std::endl;

    assert(rank2.value() == 1606);
    std::cout << "The rank of the hand in player 2 is " << rank2.value() << std::endl;

    assert(rank1.value() < rank2.value());
    std::cout << "Due to rank1.value() < rank2.value(), player 1 has a stronger hand" << std::endl;
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