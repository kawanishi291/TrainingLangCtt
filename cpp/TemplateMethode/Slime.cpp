#include "./Slime.hpp"

Slime::Slime() : name("Slime"), atk(10), def(10) {
    std::cout << name << std::endl;
}

std::string Slime::getName() {

    std::cout << __func__ << "()" << std::endl;

    return name;
}