#include <iostream>

int main() {
    int max = 0;
    int min = 99999999999;
    int input = -1;
    std::cout << "Enter a number" << std::endl;
    while (input != 0) {
        std::cin >> input;
        if (input > max) {
            max = input;
        }
        if ((input < min) && (input != 0)) {
            min = input;
        }
        std::cout << "Current max: " << max << std::endl;
        std::cout << "Current min: " << min << std::endl;
    }
}