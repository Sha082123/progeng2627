#include <iostream>

int main() {
    int count = 0;
    int n = 10;
    int number = 2;
    int result = 1;
    while (count < n) {
        result = result * number;
        count++;
    }
    std::cout << result;
}