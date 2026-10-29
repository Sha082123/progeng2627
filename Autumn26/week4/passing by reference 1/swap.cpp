#include <iostream>

// this is the only different line:
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

int main(){
    double n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    sort_two_numbers(n1, n2);

    std::cout << "numbers in order" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}