#include <iostream>

int main() {
    bool end = false;
    double sum;
    int count;
    double average;
    double input;
    while (end == false) {
        std::cout << "Enter a number" << std::endl;
        std::cin >> input;

        if (input != 0) {
            sum += input;
            count ++;
            std::cout << "Average so far: " << sum / count << std::endl;
        } else {
            end = true;
        }
    }
}