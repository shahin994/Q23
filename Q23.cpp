#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number between 0 to 10: ";
    std::cin >> number;

    if (number < 0 || number > 10) {
        std::cout << "Invalid input. Number must be between 0 to 10." << std::endl;
        return 1;
    }

    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
        if (number < 5) {
            std::cout << "The number is less than 5." << std::endl;
        } else {
            std::cout << "The number is greater than or equal to 5." << std::endl;
        }
    } else {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;
}