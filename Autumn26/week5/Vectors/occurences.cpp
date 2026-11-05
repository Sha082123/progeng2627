#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    int repeat;
    std::cout << "Enter n" << std::endl;
    std::cin >> repeat;

    int tmp;
    
    for (int i = 0; i < repeat; i++) {
        std::cout << "Enter a number" << std::endl;
        std::cin >> tmp;
        numbers.push_back(tmp);
    }

    int match;
    int count = 0;
    std::vector<int> indices;
    std::cout << "Enter s" << std::endl;
    std::cin >> match;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == match) {
            indices.push_back(i);
            count++;
        }
    }

    if (count == 0) {
        std::cout << "There are no occurences";
    } else {
        std::cout << "There are " << count << "occurences at indices ";
        for (int index : indices) {
            std::cout << index << " ";
        }
    }
}