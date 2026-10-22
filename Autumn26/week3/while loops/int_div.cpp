#include <iostream>

int main() {
    int number = 100;
    int divider = 7;
    int quotient = 0;

    while (number > divider) {
        number = number - divider;
        quotient ++;
    }

    std::cout << "quotient is: " << quotient << std::endl << "remainder is: " << number << std::endl;
}