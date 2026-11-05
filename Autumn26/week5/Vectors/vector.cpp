#include <iostream>
#include <vector>

int main() {
    std::vector<int> my_vector;
    my_vector.push_back(10);
    my_vector.push_back(20);
    std::cout << my_vector[0] << std::endl;
    std::cout << my_vector[1] << std::endl;
    my_vector[0] = 15;
    std::cout << my_vector[0] << std::endl;
    my_vector.push_back(30);
    std::cout << my_vector.size() << std::endl;
}