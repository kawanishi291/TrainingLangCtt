#include <iostream>

void show_value(float f);

int main(){
    float i = 42.195f;

    show_value(i);

    return 0;
}

void show_value(float f)
{
    std::cout << f << std::endl;
}