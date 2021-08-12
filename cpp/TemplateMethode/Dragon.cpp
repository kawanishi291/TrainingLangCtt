#include "./Dragon.hpp"

Dragon::Dragon() : name("Dragon"), atk(0), def(0) {
    std::cout << name << std::endl;
}

std::string Dragon::getName() {
    std::cout << __func__ << "()" << std::endl;

    return name;
}