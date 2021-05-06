#include <iostream>

int main()
{
    int farther;
    int mother;

    std::cout << "父親の身長(cm) => ";
    std::cin >> farther;
    std::cout << "母親の身長(cm) => ";
    std::cin >> mother;
    std::cout << "男の子" << (farther + mother + 13) / 2 + 2 << "cm" << std::endl;
    std::cout << "女の子" << (farther + mother - 13) / 2 + 2 << "cm" << std::endl;
}