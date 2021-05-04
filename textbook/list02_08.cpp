#include <iostream>


int main(){
    int value = 42; // int型の変数
    int& reference = value; // 変数valueへの参照

    std::cout << "valueのアドレスは" << &value << "で、値は" << value << "です" << std::endl;
    std::cout << "referenceのアドレスは" << &reference << "で、値は" << reference << "です" << std::endl;
    reference = 0; //参照を使って変数valueの値を書き換える
    std::cout << "valueのアドレスは" << &value << "で、値は" << value << "です" << std::endl;

    return 0;
}
