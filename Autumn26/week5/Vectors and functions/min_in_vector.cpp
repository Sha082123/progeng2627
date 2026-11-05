#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin) {
    if (vin.size() == 0) {
        return -1;
    }

    int min = vin[0];
    for (double num : vin) {
        if (num < min) {
            min = num;
        }
    }

    return min;
}

int main() {
    std::vector<double> vector = {1, 2, 3, 4, 5};
    std::cout << min_vector_element({});
}