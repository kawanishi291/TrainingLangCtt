#include "./Base.hpp"

Base::Base() {
    std::cout << __func__ << "コンストラクタ" << std::endl;
}

Base::~Base() {
    std::cout << __func__ << "デストラクタ" << std::endl;
}

void Base::method() {
    std::cout << "Base " << __func__ << "()" << std::endl;
}