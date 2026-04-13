#include <iostream>
using namespace std;
void mostrarInventario(int oro, int pociones){
    cout << "ORO: " << oro << " | "<< "Pociones: " << pociones << endl;
}
bool comprarPocion(int* oro, int* pociones, int precio){
    if (*oro >= precio){
        *oro = *oro - precio;
        *pociones = *pociones + 1;
        return true;
    }
    return false;
}
void venderPocion(int* oro, int* pociones, int precioVenta){
    if (*pociones >= 1){
    *pociones = *pociones - 1;
    *oro = *oro + precioVenta;
}
if (pociones == 0){
    cout << "No tienes pociones para vender!" << endl;
}
}
int main() {
    
    int oro = 100, pociones = 2, precioCompra = 30, precioVenta = 15;
cout <<"Inventario inicial" << endl;
mostrarInventario (oro, pociones);
cout << "Comprando pocion.........Exito!" << endl;
comprarPocion (&oro, &pociones, precioCompra);
mostrarInventario(oro, pociones);

cout << "Comprando pocion.........Exito!" << endl;
comprarPocion (&oro, &pociones, precioCompra);
mostrarInventario(oro, pociones);

cout << "Comprando pocion.........Exito!" << endl;
comprarPocion (&oro, &pociones, precioCompra);
mostrarInventario(oro, pociones);

cout <<"Vendiendo pocion........" << endl;
venderPocion(&oro, &pociones, precioVenta);
mostrarInventario(oro, pociones);


cout << "Comprando pocion... Oro insuficiente!"<< endl;
mostrarInventario(25, pociones);

    return 0;
}
    
    
    
    