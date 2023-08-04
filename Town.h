#ifndef TOWN_H
#define TOWN_H

#include "Hero.h"

class Town {
public:
    Town(); // Constructor
    void showTownMenu(Hero& hero); // Add the declaration for showTownMenu

private:
    void showShopMenu(Hero& hero);
    void buyItem(Hero& hero);
    void sellItem(Hero& hero);
};

#endif // TOWN_H
