#pragma once

#include "Product.h"
#include <algorithm>
#include <vector>

inline bool sortBySoldDesc(const Product& a, const Product& b) {
    return a.get_sold_cashier() > b.get_sold_cashier();
}

inline bool sortBySoldAsc(const Product& a, const Product& b) {
    return a.get_sold_cashier() < b.get_sold_cashier();
}

inline void sortProductsByMostSold(std::vector<Product>& products) {
    std::sort(products.begin(), products.end(), sortBySoldDesc);
}

inline void sortProductsByLeastSold(std::vector<Product>& products) {
    std::sort(products.begin(), products.end(), sortBySoldAsc);
}