#include <iostream>

int sum(int a, int b, int c);

int main(){

    std::cout << "sum(5, 1, -2):" << sum(5, 1, -2) << std::endl;

    return 0;
}

int sum(int a, int b, int c){
    int sum;

    sum = a + b + c;

    return sum;
}