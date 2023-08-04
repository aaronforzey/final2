#include <iostream>
#include "Hero.h"

Hero::Hero(const std::string& name, int health, int experience, int level, int gold)
    : Character(name, health), experience(experience), level(level), gold(gold), inventory(*this) {}

int Hero::getExperience() const {
    return experience;
}

int Hero::getLevel() const {
    return level;
}

int Hero::getGold() const {
    return gold;
}

void Hero::gainExperience(int amount) {
    experience += amount;
    if (experience >= 100) {
        levelUp();
    }
}

void Hero::levelUp() {
    level++;
    health += 20; // Increase health by 20 on leveling up
    experience = 0;
    std::cout << "Level up! You are now level " << level << "." << std::endl;
}

void Hero::displayStats() const {
    std::cout << "=== Hero Stats ===" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Level: " << level << std::endl;
    std::cout << "Experience: " << experience << std::endl;
}

void Hero::displayInventory() const {
    std::cout << "=== Inventory ===" << std::endl;
    inventory.displayInventory();
}

Inventory& Hero::getInventory() {
    return inventory;
}
