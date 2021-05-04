#include <iostream>

class product
{
    int id;
    int price;
    int stock;

public:
    int get_id();               // 商品の getter
    void set_id(int new_id);    // 商品の setter

    int get_price();                // 単価の getter
    void set_price(int new_price);  // 単価の setter

    int get_stock();                // 在庫数の getter
    void set_stock(int new_stock);  // 在庫数の setter
};

int product::get_id()
{
    /* メンバー関数の内側ではメンバー変数に直接アクセスできる */
    return id;
}

void product::set_id(int new_id)
{
    id = new_id;
}

int product::get_price()
{
    /* メンバー関数の内側ではメンバー変数に直接アクセスできる */
    return price;
}

void product::set_price(int new_price)
{
    /* Setter を使うと新しい値が不正でないかチェックできる */
    if (new_price < 0){
        std::cout << "エラー：単価は0以上にして下さい" << std::endl;
        return;
    }
    price = new_price;
}

int product::get_stock()
{
    /* メンバー関数の内側ではメンバー変数に直接アクセスできる */
    return stock;
}

void product::set_stock(int new_stock)
{
    /* Setter を使うと新しい値が不正でないかチェックできる */
    if (new_stock < 0){
        std::cout << "エラー：在庫数は0以上にして下さい" << std::endl;
        return;
    }
    stock = new_stock;
}


int main(){
    product pen;
    product *ptr = &pen;

    pen.set_id(0);
    pen.set_price(100);
    pen.set_stock(200);

    std::cout << "商品ID：" << ptr->get_id() << std::endl;
    std::cout << "単価：" << ptr->get_price() << std::endl;
    std::cout << "在庫数：" << ptr->get_stock() << std::endl;

    return 0;
}
