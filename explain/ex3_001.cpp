#include <iostream>
#include<string>
using namespace std;

int main(){
    int num;
    int i;

    cout << "数値を入力してください => "<<endl;
    cin >> num;

    for (i = 1; i <= num; i++) {
        if (i % 15 == 0) {
            cout << "FizzBuzz ";
        } else if (i % 3 == 0) {
            cout << "Fizz ";
        } else if (i % 5 == 0) {
            cout << "Buzz ";
        } else {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}