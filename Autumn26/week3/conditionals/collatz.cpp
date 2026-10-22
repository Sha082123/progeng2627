#include <iostream>

int main() {
    int num = 123;
    int min = 9999999999999;
    int max = 0;
    while (num != 1) {
        if (num % 2 == 0){
            num /= 2;
        } else {
            num = 3*num + 1;
        }
        if (num > max) {
            max = num;
        }
        if (num < min){
            min = num;
        }
        std::cout << num << std::endl;
    }
    std::cout << "max: " << max << std::endl << "min: " << min << std::endl;
}