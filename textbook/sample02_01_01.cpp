#include <iostream>

struct product{
    int id;     //商品ID
    int price;  //単価
    int stock;  //在庫数
};


//引数として構造体変数を受け取る関数
void show_product(product *p);

int main(){
    product pen = {
        0,
        100,
        200
    };
    product *p = &pen;

    show_product(p);

    return 0;
}

void show_product(product *p)
{
    std::cout << "商品ID：" << p->id << std::endl;
    std::cout << "単価：" << p->price << std::endl;
    std::cout << "在庫数：" << p->stock << std::endl;
}