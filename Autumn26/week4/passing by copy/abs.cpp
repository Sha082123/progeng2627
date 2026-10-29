#include <iostream>


double get_abs (double number);

int main() {
    double number;
    std::cin >> number;
    std::cout << "abs: " << get_abs(number) << std::endl;
}

double get_abs (double number) {
    if (number < 0) {
        return number * -1;
    }
    return number;
}