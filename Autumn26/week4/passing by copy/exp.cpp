#include <iostream>
#include <cmath>

double my_pow(double base, double exponent) {
    double answer = 1;
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    return answer;
}

double sum_of_powers(double base, double exponent) {
    double sum = 0;
    for (int i = 1; i <= exponent; i++) {
        sum += my_pow(base, i);
    }
    return sum;
}

int main() {
    double base;
    double exponent;
    std::cin >> base >> exponent;
    std::cout << sum_of_powers(base, exponent);
}