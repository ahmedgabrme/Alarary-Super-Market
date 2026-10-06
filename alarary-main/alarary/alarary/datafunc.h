// CSV func.h
#pragma once
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Product.h"
// NO: using namespace std; (هو كدا)

std::string items_data = "items_data.csv";
std::string cats_data = "categories_data.txt";
std::vector<Product> loaditmesFromFile() {
    std::vector<Product> products;
    std::ifstream file(items_data);
    if (!file.is_open()) return products;

    std::string line;
    std::getline(file, line); // skip header

    while (std::getline(file, line)) {
        if (line.empty()) continue;
        std::stringstream ss(line);

        std::string b, n, c, q, p, s;
        std::getline(ss, b, ',');
        std::getline(ss, n, ',');
        std::getline(ss, c, ',');
        std::getline(ss, q, ',');
        std::getline(ss, p, ',');
        std::getline(ss, s, ',');
        if (!b.empty())
            products.push_back(Product(b, n, c, std::stoi(q), std::stod(p), std::stoi(s)));
   
    }
    file.close();
    return products;
}
std::vector<std::string> loadcatFromFile() {
    std::vector<std::string> categories;
    std::ifstream file(cats_data);
    if (!file.is_open()) return categories;

    std::string line;
    std::getline(file, line); // skip header

    while (std::getline(file, line)) {
        if (line.empty()) continue;

            categories.push_back(line);

    }
    file.close();
    return categories;
}