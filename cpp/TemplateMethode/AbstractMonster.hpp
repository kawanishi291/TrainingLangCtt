#include <iostream>

#include <string>

class AbstractMonster
{
public:
    std::string name;
    int         atk;
    int         def;

    AbstractMonster();
    ~AbstractMonster();
    void setData(std::string name, int atk, int def);
    std::string getName();
    int getAttack();
    int getDefense();
};
