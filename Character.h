#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
protected:
    std::string name;
    int health;

public:
    Character(const std::string& name, int health);

    const std::string& getName() const;
    int getHealth() const;
    void takeDamage(int damage);
    virtual void attack(Character& target); // Add a virtual attack function
};

#endif // CHARACTER_H
