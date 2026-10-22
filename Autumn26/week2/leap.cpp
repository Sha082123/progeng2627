#include <iostream>

int main() {
    bool is_leap = false;
    int year;

    std::cout << "Enter your year" << std::endl;
    std::cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                is_leap = true;
            }
        } else {
            is_leap = true;
        }
    }

    if (is_leap) {
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
    }

    return 0;
}