#include "main.h"
#include <string>
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

int main() {
    std::string option{};
    while (true) {
        std::cout << "\nUnits:\t\t" << AlcoholCounter / 10 << "\nTimeLeft:\t" << AlcoholCounter / 10 << " hours" <<
            "\n=-=-=-=-=-=-=-=" << "\n\"add\"\t\t add alcohol to count\n\"sub\"\t\t subtract alcohol from count\n\n";

        std::cout << "Enter option: ";
        std::cin >> option;
        if (option == "add")
            addAlcohol();
        if (option == "sub")
            reduceAlcohol();
        if (option != "add" && option != "sub")
            std::cout << "Invalid option.\n";
    }
}
