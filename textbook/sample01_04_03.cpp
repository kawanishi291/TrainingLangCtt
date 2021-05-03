#include <iostream>


int main(){
    int a = 0;

    if (a + 1 == 1) {
        std::cout << "a + 1は1です" << std::endl;
    } else if (a + 1 == 2) {
        std::cout << "a + 1は2です" << std::endl;
    } else if (a + 1 == 3) {
        std::cout << "a + 1は3です" << std::endl;
    } else {
        std::cout << "a + 1は1でも2でも3でもありません" << std::endl;
    }
    

    return 0;
}
