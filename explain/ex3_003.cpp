#include <iostream>
#include<string>
#include <sstream>

int main(){
    std::string array;
    int i;
    int num;


    std::cout << "文字（99文字まで）を入力してください\n => ";
    std::cin >> array;
    std::cout << " >> ";
    for (i = 0; i < array.length(); i++) {
        if ('A' <= array[i] && array[i] <= 'Z') {
            printf("%c", array[i] - ('A' - 'a'));
        } else if ('a' <= array[i] && array[i] <= 'z') {
            printf("%c", array[i] + ('A' - 'a'));
        } else {
            printf("%c", array[i]);
        }
    }
    std::cout << "\n";

    return 0;
}
