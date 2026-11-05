#include <iostream>
#include <fstream>

int main() {
    std::ifstream infile;
    infile.open("wrong.txt");
    if (!infile.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    infile.close();
}