#include "main.h"
#include <iomanip>
#include <iostream>


float AlcoholCounter{ 0 };

void reduceAlcohol() {
    float temp{};
    std::cout << "ML of alcohol to subtract: ";
    std::cin >> temp;
    AlcoholCounter -= temp;
}

void addAlcohol() {
    float temp{};
    std::cout << "ML of alcohol to add: ";
    std::cin >> temp;
    AlcoholCounter += temp;
}

void endTime() {
    std::cout << std::setprecision(2);
    std::cout << "Time till alcohol fully out of system: " << AlcoholCounter / 10;
}

int main() {
    string option{};
    while (true) {
        std::cout << "Units:\t\t" << AlcoholCounter / 10 << "\nTimeLeft:\t" << endTime() <<
            "\n=-=-=-=-=-=-=-=" << "\"add\"\t\t add alcohol to count\n\"sub\" subtract alcohol from count";

        std::cout << "Enter option: ";
        std::cin >> option;
        if (option == "add")
            addAlcohol();
        if (option == "sub")
            reduceAlcohol();
        else
            std::cout << "Invalid option."
    }
}
