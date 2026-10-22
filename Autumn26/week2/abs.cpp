#include <iostream>

int main() {
    double number, abs_number;

    std::cout << "Enter a number" << std::endl;
    std::cin >> number;

    if (number < 0) {
        abs_number = -number;
    } else {
        abs_number = number;
    }

    std::cout << "|" << number << "| = " << abs_number << std::endl;
    
    return 0;
}