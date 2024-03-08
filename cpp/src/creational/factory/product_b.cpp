#include "factory/product_b.hpp"

ProductB::ProductB(int id) : _id(id) {}

int ProductB::id() {
    return this->_id;
}