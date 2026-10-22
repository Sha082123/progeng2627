#include <iostream>

int main() {
    int sum = 1;
    for (int i = 5; i > 1; i--) {
        sum *= i;
    }
    std::cout << sum << std::endl;
}