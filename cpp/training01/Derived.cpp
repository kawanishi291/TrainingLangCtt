#include "./Derived.hpp"

Derived::Derived() {
    std::cout << __func__ << "コンストラクタ" << std::endl;
}

Derived::Derived(int i) : Base(i) { }

Derived::~Derived() {
    std::cout << __func__ << "デストラクタ" << std::endl;
}