#include <iostream>
#include <cmath>

void perimeter_and_area(double &side1, double &side2, double &perimeter, double &area) {
    perimeter = 2*(side1 + side2);
    area = side1 * side2;
}

int main() {
    double n1, n2, perimeter, area;
    std::cin >> n1 >> n2;
    perimeter_and_area(n1, n2, perimeter, area);
    std::cout << "Perimeter: " << perimeter << " Area: " << area;
}