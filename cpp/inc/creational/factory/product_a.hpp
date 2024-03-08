#ifndef PRODUCT_A_H
#define PRODUCT_A_H

#include "factory/product.hpp"

class ProductA : public Product {
public:
    ProductA() = delete;
    ProductA(int id);
    int id();
    virtual ~ProductA() = default;
private:
    int _id;
};

#endif