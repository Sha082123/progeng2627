#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream infile;
    infile.open("words.txt");

    if (!infile.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> m_vector;
    std::string tmp;
    while (infile >> tmp) {
        m_vector.push_back(tmp);
    }

    infile.close();

    for (int i = m_vector.size() - 1; i > -1; i--) {
        std::cout << m_vector[i] << std::endl;
    }
}