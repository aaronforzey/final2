#include "Inventory.h"
#include "Hero.h"
#include <iostream>

Inventory::Inventory(Hero& hero) : items(), hero(hero) {}

bool Inventory::addItem(const Item& newItem) {
    if (items.size() < MAX_ITEMS) {
        items.push_back(newItem);
        return true;
    }
    return false;
}

bool Inventory::removeItem(const Item& itemToRemove) {
    for (size_t i = 0; i < items.size(); i++) {
        if (items[i].getName() == itemToRemove.getName()) {
            items.erase(items.begin() + i);
            return true;
        }
    }
    return false;
}

void Inventory::displayInventory() const {
    if (items.empty()) {
        std::cout << "Your inventory is empty." << std::endl;
    }
    else {
        std::cout << "=== Inventory ===" << std::endl;
        for (const Item& item : items) {
            std::cout << "- " << item.getName() << " (Cost: " << item.getCost() << " gold)" << std::endl;
        }
    }
}

int Inventory::getNumItems() const { // Change the return type back to int
    return static_cast<int>(items.size()); // Convert size_t to int using static_cast
}

const Item& Inventory::getItem(int index) const {
    return items[index];
}

int Inventory::getGold() const {
    return hero.getGold();
}
