#include "./AbstractMonster.hpp"


class Slime : public AbstractMonster
{
    std::string name;
    int         atk;
    int         def;

public:
    Slime();
};