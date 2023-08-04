#ifndef GAME_H
#define GAME_H

#include "Hero.h"
#include "Town.h"

class Game {
public:
    Game();
    void start(); // Add the declaration for the start function

private:
    Hero hero;
    Town town;
};

#endif // GAME_H
