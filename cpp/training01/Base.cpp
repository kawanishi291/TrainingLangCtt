#include "./Base.hpp"

Base::Base() {
    std::cout << __func__ << "() コンストラクタ" << std::endl;
}

Base::Base(int i) {
    std::cout << __func__ << "(" << i << ") 引数付きコンストラクタ" << std::endl;
}

Base::~Base() {
    std::cout << __func__ << "() デストラクタ" << std::endl;
}