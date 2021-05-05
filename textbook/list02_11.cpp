#include <iostream>

/* 型推論を使った範囲for文 */

int main(){
    int array[] = {0, 1, 2, 3, 4};

    for (auto e:array) {
        std::cout << e << std::endl;
    }

    return 0;
}