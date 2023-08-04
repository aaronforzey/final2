#include "Game.h"
#include <iostream>

Game::Game() : hero("Player", 100, 0, 1, 100) {}

void Game::start() {
    std::cout << "Welcome to the RPG Adventure Game!" << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "You are a brave hero on a quest to save the kingdom." << std::endl;

    while (true) {
        char choice;
        std::cout << std::endl;
        std::cout << "=== Main Menu ===" << std::endl;
        std::cout << "1. View Hero Stats" << std::endl;
        std::cout << "2. View Inventory" << std::endl;
        std::cout << "3. Visit Town" << std::endl;
        std::cout << "4. Exit Game" << std::endl;
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
            town.showTownMenu(hero);
            break;
        case '4':
            std::cout << "Exiting the game..." << std::endl;
            return;
        default:
            std::cout << "Invalid choice. Try again." << std::endl;
        }
    }
}
