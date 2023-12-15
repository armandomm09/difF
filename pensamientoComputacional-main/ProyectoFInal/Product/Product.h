/**
 * Autores:
 * Fecha:
 * Propósito:
 */

#include <string>

class Product {
    private:
        std::string name;
        std::string brand;
        double price;
        int stock;

    public:
        Product();
        Product(std::string, std::string, double, int);

        ~Product()
        {
        }

        void setName(std::string);
        void setBrand(std::string);
        void setPrice(double);
        void setStock(int);

        std::string getName();
        std::string getBrand();
        double getPrice();
        int getStock();

        std::string toString();
};