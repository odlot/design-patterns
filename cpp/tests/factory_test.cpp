#include <gtest/gtest.h>

#include "factory/factory.hpp"
#include "factory/product_a.hpp"

TEST(FactoryTest, InvalidCreation) {
    std::unique_ptr<Factory> factory = std::make_unique<Factory>();
    std::unique_ptr<Product> product = factory->create(-1);
    ASSERT_EQ(product, nullptr);
}

TEST(FactoryTest, ValidCreationProductA) {
    std::unique_ptr<Factory> factory = std::make_unique<Factory>();
    int id = 1;
    std::unique_ptr<Product> product = factory->create(id);
    ASSERT_EQ(product->id(), id);
}

TEST(FactoryTest, ValidCreationProductB) {
    std::unique_ptr<Factory> factory = std::make_unique<Factory>();
    int id = 2;
    std::unique_ptr<Product> product = factory->create(id);
    ASSERT_EQ(product->id(), id);
}