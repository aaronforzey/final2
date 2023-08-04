#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

class Enemy : public Character {
public:
    Enemy(const std::string& name, int health);
    void attack(Character& target) override; // Override the attack function for the enemy
};

#endif // ENEMY_H
