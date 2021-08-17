#include "./Base.hpp"

class Derived : public Base
{
public:
    Derived();
    explicit Derived(int i);
    ~Derived();
};