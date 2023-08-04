#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    int cost;

public:
    Item(const std::string& name, int cost);

    const std::string& getName() const;
    int getCost() const;
};

#endif // ITEM_H
