#include <iostream>

double max(double n1, double n2, double n3) {
    if (n1 > n2) {
        if (n1 > n3) {
            return n1;
        }
        return n3;
    } else if (n2 > n3) {
        return n2;
    } 
    return n3;
}

int main() {
    double n1, n2, n3;
    std::cout << "Enter 3 numbers" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    std::cout << "max: " << max(n1, n2, n3);
}