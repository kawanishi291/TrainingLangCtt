#include <iostream>

/* 型推論は関数呼び出しや数値計算などの式の結果からも行える */
int one();

int main(){
    auto d = 3.14;  // 3.14はdouble型の値なので d はdouble型に推論される
    auto i = one(); // one() はint型の値を返す関数なので、整数iにはint型に推論される
                    
    d = 2.71f; // 2.71f はfloat型なので、double型に推論された d に問題なく格納できる
    std::cout << d << std::endl;
    i = 42.195; // iはint型なのでdouble型の値の代入では暗黙の型変換が行われる
    std::cout << i << std::endl;

    return 0;
}

// 常に1を返す関数
int one()
{
    return 1;
}