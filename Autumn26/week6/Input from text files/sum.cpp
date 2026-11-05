#include <iostream>
#include <fstream>

int main() {
    std::ifstream infile;
    infile.open("input2.txt");
    int sum = 0;

    if (infile.is_open()) {
        int tmp;
        while (infile >> tmp) {
            std::cout << tmp << std::endl;
            sum += tmp;
        }
    } else {
        std::cout << "Error opening file" << std::endl;
    }

    infile.close();
    std::cout << "sum of numbers in file: " << sum << std::endl;
}