#include "Enemy.h"

Enemy::Enemy(const std::string& name, int health)
    : Character(name, health) {}

void Enemy::attack(Character& target) {
    Character::attack(target); // Use the base class attack function for the enemy's attack
}
