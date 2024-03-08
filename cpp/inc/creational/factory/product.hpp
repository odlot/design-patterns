#ifndef FACTORY_PRODUCT_H
#define FACTORY_PRODUCT_H

class Product {
public:
    virtual int id() = 0;
    virtual ~Product() = default;
};

#endif