#ifndef PRODUCT_B_H
#define PRODUCT_B_H

#include "factory/product.hpp"

class ProductB : public Product {
public:
    ProductB() = delete;
    ProductB(int id);
    int id();
    virtual ~ProductB() = default;
private:
    int _id;
};

#endif