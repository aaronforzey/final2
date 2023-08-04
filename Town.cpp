#include "Town.h"
#include <iostream>

// Constructor
Town::Town() {}

void Town::showTownMenu(Hero& hero) {
    char choice;
    while (true) {
        std::cout << "=== Town ===" << std::endl;
        std::cout << "1. View Stats" << std::endl;
        std::cout << "2. View Inventory" << std::endl;
        std::cout << "3. Visit Shop" << std::endl;
        std::cout << "4. Exit Town" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            hero.displayStats();
            break;
        case '2':
            hero.displayInventory();
            break;
        case '3':
            showShopMenu(hero); // Call the shop menu function
            break;
        case '4':
            std::cout << "Leaving town..." << std::endl;
            return;
        default:
            std::cout << "Invalid choice. Try again." << std::endl;
        }
    }
}

void Town::showShopMenu(Hero& hero) {
    char choice;
    while (true) {
        std::cout << "=== Shop ===" << std::endl;
        std::cout << "1. Buy Item" << std::endl;
        std::cout << "2. Sell Item" << std::endl;
        std::cout << "3. Exit Shop" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            buyItem(hero); // Call the buyItem function
            break;
        case '2':
            sellItem(hero);
            break;
        case '3':
            std::cout << "Leaving shop..." << std::endl;
            return;
        default:
            std::cout << "Invalid choice. Try again." << std::endl;
        }
    }
}

void Town::buyItem(Hero& hero) {
    // Implementation for buying an item
}

void Town::sellItem(Hero& hero) {
    // Implementation for selling an item
}
