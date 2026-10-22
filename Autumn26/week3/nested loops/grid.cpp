#include <iostream>

int main() {
    int n = 3;
    for (int row = n; row > 0; row--) {
        for (int column = n; column > 0; column--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}