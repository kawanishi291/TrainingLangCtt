#include "./Derived.hpp"

void Derived::method() {
    std::cout << "Derived " << __func__ << "()" << std::endl;
}