#include <iostream>

int main(){
    int i;
    int sum = 0;

    for (i = 0; i < 6; i++) {
        sum *= 10;
        sum += 1;
        // std::cout << sum << std::endl;
        printf("%6d\n", sum);
    }

    return 0;
}