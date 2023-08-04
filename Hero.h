#ifndef HERO_H
#define HERO_H

#include "Character.h"
#include "Inventory.h"

class Hero : public Character {
private:
    int experience;
    int level;
    int gold;

    Inventory inventory;

public:
    Hero(const std::string& name, int health, int experience = 0, int level = 1, int gold = 100);

    int getExperience() const;
    int getLevel() const;
    int getGold() const;

    void gainExperience(int amount);
    void levelUp();
    void displayStats() const;
    void displayInventory() const;

    Inventory& getInventory();
};

#endif // HERO_H
