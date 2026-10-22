#include <iostream>

int main() {
    int num;
    std::cin >> num;
    bool prime = true;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = false;
        }
    }

    if (prime == true) {
        std::cout << "Number is prime" << std::endl;
    } else {
        std::cout << "Number is not prime" << std::endl;
    }
}