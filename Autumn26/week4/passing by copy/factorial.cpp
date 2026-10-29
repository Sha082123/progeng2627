#include <iostream>

int myfactorial(int in){
    int answer = 1;
    for (int i = in; i > 0; i--) {
        answer *= i;
    }
    return answer;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}