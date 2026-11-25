#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ifstream infile;
    std::ofstream outfile;

    outfile.open("text to file/text.txt");

    if (!outfile.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 0;
    }

    for (int i = 0; i < argc; i++) {
        outfile << argv[i] << std::endl;
    }

    outfile.close();
}