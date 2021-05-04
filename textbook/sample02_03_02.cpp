#include <iostream>

/*
const参照
読み取り可能、書き換え不可
*/

int main(){
    const int i = 42;
    const int &r = i;

    std::cout << r << std::endl;

    return 0;
}