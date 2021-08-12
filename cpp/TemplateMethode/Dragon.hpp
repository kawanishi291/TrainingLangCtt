#include "./AbstractMonster.hpp"

class Dragon : public AbstractMonster
{
    std::string name;
    int         atk;
    int         def;

public:
    Dragon();
    std::string getName();
};