#include <iostream>

void myswap(double& a, double& b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_two_numbers(double& s1, double& s2){
    if (s1 > s2) {
        myswap(s1, s2);
    }
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    sort_two_numbers(s1, s2);
    sort_two_numbers(s2, s3);
    sort_two_numbers(s1, s2);
}

int main() {
    double n1, n2, n3;
    std::cout << "Enter 3 numbers" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}