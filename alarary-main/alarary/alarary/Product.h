#pragma once
#include <string>
#include <vector>
#include <sstream>

class Product {
private:
    std::string name;
    std::string barcode;
    std::string category;
    int         quantity;
    double      price;
    int         howManySold;

public:
    Product() : quantity(0), price(0.0), howManySold(0) {}

    Product(std::string b, std::string n, std::string c, int q, double p, int sold)
        : barcode(b), name(n), category(c), quantity(q), price(p), howManySold(sold) {}

    // Convert product to CSV line
    std::string toCSV() {
        return barcode + "," + name + "," + category + "," +
               std::to_string(quantity) + "," +
               std::to_string(price) + "," +
               std::to_string(howManySold);
    }

    // Getters
    std::string getBarcode()  const { return barcode; }
    std::string getName()     const { return name; }
    std::string getCategory() const { return category; }
    std::string getQty()      const { return std::to_string(quantity); }
    std::string getPrice()    const { return std::to_string(price); }   // ✅ fixed: was int, should be double


    System::String^ get_barcode_cashier()  const { return gcnew System::String(barcode.c_str()); }
    System::String^ get_name_cashier()     const { return gcnew System::String(name.c_str()); }
    int get_qty_cashier()      const { return quantity; }
    double get_price_cashier()    const { return price; }
    int get_sold_cashier()     const { return howManySold; }


    // Setters
    void setBarcode(std::string b)  { barcode = b; }
    void setName(std::string n)     { name = n; }
    void setCategory(std::string c) { category = c; }
    void setQuantity(int q)         { quantity = q; }
    void setPrice(double p)         { price = p; }      // ✅ fixed: was int, should be double
    void setSold(int s)             { howManySold = s; }

    // Build product from CSV line
    static Product fromCSV(const std::string& line) {
        std::stringstream ss(line);
        std::string token;
        std::vector<std::string> parts;

        while (std::getline(ss, token, ','))
            parts.push_back(token);

        if (parts.size() < 6) return Product();        // ✅ fixed: 6 fields not 5

        Product p;
        p.barcode      = parts[0];
        p.name         = parts[1];
        p.category     = parts[2];
        p.quantity     = std::stoi(parts[3]);
        p.price        = std::stod(parts[4]);
        p.howManySold  = std::stoi(parts[5]);
        return p;
    }

    // Display string for UI
    std::string display() const {
        return name + " | " + barcode + " | " + category +
               " | Qty:" + std::to_string(quantity) +
               " | $"   + std::to_string(price);
    }
};