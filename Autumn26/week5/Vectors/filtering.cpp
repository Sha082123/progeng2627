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

    int threshold;
    std::cout << "Enter s" << std::endl;
    std::cin >> threshold;

    for (int number : numbers) {
        if (number <= threshold) {
            std::cout << number << std::endl;
        }
    }
}