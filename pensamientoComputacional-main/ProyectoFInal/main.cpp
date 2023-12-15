/**
 * Autores:
 * Fecha:
 * Propósito:
 */

#include "./Product/Product.cpp"
#include <iostream>
#include <vector>

using namespace std;

void addProduct();
void deleteProduct();
void showProducts();
std::string returnLineCin();


vector<Product> addProduct(vector<Product>& productVector)
{
Product producto;
string productName;
string productBrand;
double productPrice;
int productStock;

cout << "Ingresa el nombre de tu producto: ";
cin >> productName;
producto.setName(productName);
cout << "Ingresa la marca de tu producto: ";
cin >>  productBrand;
producto.setBrand(productBrand);
cout << "Ingresa el costo del producto: ";
cin >> productPrice;
producto.setPrice(productPrice);
cout << "Ingresa la cantidad de productos en stock: ";
cin >> productStock;
producto.setStock(productStock);

productVector.push_back(producto);

return productVector;
}

vector<Product> deleteProduct(vector<Product>& productVector)
{
    int productoAEliminar;
    cout << "Digite el número de producto que desea eliminar: ";
    cin >> productoAEliminar;
    productoAEliminar -= 1;

    if (productoAEliminar < productVector.size()){
        productVector.erase(productVector.begin() + productoAEliminar);

    } else {
        cout << "Ese numero de producto no existe";
    }

    return productVector;
}


void showProducts(vector<Product>& productVector)
{
    cout << "Lista de productos:" << endl;

    for(int i=0; i < productVector.size(); i++){
         cout << i+1 << " "<<  productVector[i].toString() << endl;
    }
    cout << " " << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << " " << endl;

}

string returnLineCin()
{
    string input;
    getline(cin, input);
    return input;
}


int main() {
    int opt;
    vector<Product> Productos;

    do {
        cout << "<----- Bienvenidos a la Posty Shop ----->" << endl;
        cout << "<----- Por favor, seleccione una de las opciones ---->" << endl;
        cout << "(1) -> Agregar producto Posty | (2) -> liminar un producto Posty"\
        " | (3) -> Mostrar lista de productos | (0) -> Salir" << endl;
        cin >> opt;
        switch (opt) {
            case 0:
                cout << "Adiós." << endl;
                break;
            case 1:
                Productos = addProduct(Productos);
                break;
            case 2:
                Productos = deleteProduct(Productos);
                break;
            case 3:
                showProducts(Productos);
                break;
            default:
                cout << "Opción inválida." << endl;
                break;

        }
    }
        while (opt != 0);
}


