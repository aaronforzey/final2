#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h" // Include the Item header

#include <vector>

class Hero; // Forward declaration for the Hero class

class Inventory {
private:
    static const int MAX_ITEMS = 10;
    std::vector<Item> items;
    Hero& hero; // Add reference to the Hero object

public:
    Inventory(Hero& hero); // Modify constructor to take a Hero object

    bool addItem(const Item& newItem);
    bool removeItem(const Item& itemToRemove);
    void displayInventory() const;

    int getNumItems() const;
    const Item& getItem(int index) const;
    int getGold() const;
};

#endif // INVENTORY_H
