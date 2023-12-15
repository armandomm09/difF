/**
 * Autores:
 * Fecha:
 * Propósito:
 */

#include "Product.h"
#include <string>

Product::Product()
{
    name = "null";
    brand = "null";
    price = 0.0;
    stock = 0;
}

Product::Product(std::string name, std::string brand, double price, int stock) : name(name), brand(brand), price(price), stock(stock)
{
}

void Product::setName(std::string name)
{
    this->name = name;
}

void Product::setBrand(std::string brand)
{
    this->brand = brand;
}

void Product::setPrice(double price)
{
    this->price = price;
}

void Product::setStock(int stock)
{
    this->stock = stock;
}

std::string Product::getName()
{
    return name;
}

std::string Product::getBrand()
{
    return brand;
}

double Product::getPrice()
{
    return price;
}

int Product::getStock()
{
    return stock;
}

std::string Product::toString()
{
    std::string ss;
    ss = "Nombre: " + name + " | Marca: " + brand + " | Precio: $" + std::to_string(price) + " | Stock: " + std::to_string(stock);
    return ss;
}