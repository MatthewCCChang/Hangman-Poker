#include <iostream>
#include <cassert>
// #include "../phevaluator/phevaluator.h"
#include "card.h"
#include "deck.h"
#include "gameboard.h"

int main()
{
    // Deck testing = Deck();
    Gameboard game = Gameboard();
    game.showHand(1);
    std::cout << "testing" << std::endl;
    // std::cout << testing << std::endl;
    /*
        after presenting the board, will goto each hand and check flush->straight/HC->pairs and others to get ranking of that hand
        -gameboard & hand
        game starts gameboard, when ends, will show result whether guessed right or wrong
        -hand class: each row in order.txt is one combo which will be stored in a hash map/array with ranking as val and prime product as key
            on start up, populate array from all vals in Deck
        -either read from file or fill in manually; keep ranking no., suit, and cards
    */
}

/*
    Card: suit and number indicated by 64-bit number
    Deck: holds cards, need to be able to add or remove cards and shuffle
    Player: be able to see 2 cards, track games won
    Game: river has five cards, displays player's win rate after revelation of 3/1/1 cards against computer.
        Player has 5 chances to guess as in hangman(diff lvs? for guessing suit as well?)
    Hangman: 5 chances, each time incorrect subtracts one life. life=0 lose, if correct before that user wins



*/