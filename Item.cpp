#include "Item.h"

Item::Item(const std::string& name, int cost) : name(name), cost(cost) {}

const std::string& Item::getName() const {
    return name;
}

int Item::getCost() const {
    return cost;
}
