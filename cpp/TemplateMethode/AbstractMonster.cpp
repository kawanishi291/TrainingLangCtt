#include "./AbstractMonster.hpp"


AbstractMonster::AbstractMonster() {
    std::cout << "AbstractMonster()" << std::endl;
}


AbstractMonster::~AbstractMonster() {

}

void AbstractMonster::setData(std::string name, int atk, int def){
    this->name = name;
    this->atk = atk;
    this->def = def;

    return;
}

std::string AbstractMonster::getName() {

    std::cout << __func__ << "()" << std::endl;

    return name;
}

int AbstractMonster::getAttack() {

    std::cout << __func__ << "()" << std::endl;

    return atk;
}

int AbstractMonster::getDefense() {

    std::cout << __func__ << "()" << std::endl;

    return def;
}