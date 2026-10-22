#include <iostream>

int main() {
    int n1;
    int n2;

    std::cout << "Enter a side" << std::endl;
    std::cin >> n1;
    
    std::cout << "Enter a second side" << std::endl ;
    std::cin >> n2;

    std::cout << "Perimeter is: " << (n1 + n2) * 2 << std::endl;
    std::cout << "Area is: " << n1 * n2 << std::endl;
    
    return 0;
}