#include "Character.h"
#include <iostream>

Character::Character(const std::string& name, int health)
    : name(name), health(health) {}

const std::string& Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

void Character::attack(Character& target) {
    std::cout << name << " attacks " << target.getName() << " for 10 damage!" << std::endl;
    target.takeDamage(10);
}
