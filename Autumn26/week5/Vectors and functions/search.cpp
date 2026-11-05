#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (n == vin[i]){
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> vector = {1, 2, 3, 4, 5};
    std::cout << search_vector(2, vector);
}