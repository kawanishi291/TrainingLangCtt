#include <iostream>

// 構造体宣言
struct S{
    int x;
    int y;
};
// 共用体宣言
union U{
    S s;
};


int main(){
    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    std::cout << u.s.x << std::endl;

    return 0;
}