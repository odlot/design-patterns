#include "factory/product_a.hpp"

ProductA::ProductA(int id) : _id(id) {};

int ProductA::id() {
    return this->_id;
}