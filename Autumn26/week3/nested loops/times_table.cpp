#include <iostream>

int main() {
    int number;
    std::cin >> number;
    for (int a = 1; a <= number; a++) {
        for (int b = 1; b <= number; b++){
            std::cout << a*b << "\t";
        }
        std::cout << std::endl;
    }
}