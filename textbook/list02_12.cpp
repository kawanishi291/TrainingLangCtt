#include <iostream>

/* 値の1(戻り値)の型を推論し、その型を戻り値の型として使う */
decltype(1) one();

int main(){
    auto i = one(); // autoを使った型推論
    decltype(i) j;  // 変数iから型を推論して変数宣言するので初期値は不要

    j = 42.195;     // jはint型に推論されるので、暗黙の型変換が行われる
    std::cout << j << std::endl;

    return 0;
}

decltype(1) one()
{
    return 1;
}