#include <iostream>
#include <sstream>
#include "render.h"
int tryPlace(std::string cord, char symbol) {
    int xCord, yCord;

    std::stringstream ss;
    ss << cord.front();
    ss >> xCord;
    ss.clear();
    ss << cord.back();
    ss >> yCord;

    if (cord.length() != 2)
        return 2;
    if (xCord != 0 && xCord != 1 && xCord != 2)
        return 2;
    if (yCord != 0 && yCord != 1 && yCord != 2)
        return 2;
    if (unitArray[xCord][yCord].changeState(symbol))
        return 0;
    else
        return 1;
}

int main() {
    char symbol = 'X';
    std::string position;
    while (true) {
        render();

        if (symbol == 'X') {
            std::cout << "It is X's turn: ";
            std::cin >> position;
            std::cout << std::endl;
            int result = tryPlace(position, symbol);
            if (result == 0)
                symbol = 'O';
            else if (result == 1)
                std::cout << "Place already taken, please choose another one. \n";
            else if (result == 2)
                std::cout << "Invalid coordinates.\n";
        } else {
            std::cout << "It is O's turn: ";
            std::cin >> position;
            std::cout << std::endl;
            int result = tryPlace(position, symbol);
            if (result == 0)
                symbol = 'X';
            else if (result == 1)
                std::cout << "Place already taken, please choose another one. \n";
            else if (result == 2)
                std::cout << "Invalid coordinates.\n";
        }
    }
}
