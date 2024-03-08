#include "factory/product.hpp"
#include "factory/product_a.hpp"
#include "factory/product_b.hpp"

#include <memory>

class Factory {
public:
    virtual std::unique_ptr<Product> create(int id) {
        std::unique_ptr<Product> product = nullptr;
        switch(id) {
            case 1: {
                product = std::make_unique<ProductA>(id);
                break;
            }
            case 2: {
                product = std::make_unique<ProductB>(id);
                break;
            }
        }
        return product;
    }
};