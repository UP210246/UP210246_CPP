/*
Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad.
*/

#include<iostream>

using namespace std;

int main()
{
    int contador = 1;
    float cantidadVendida;
    float precioArticulo;
    float factura;
    float facAcum = 0;

    do
    {
        cout << "Enter the amount sold = ";
        cin >> cantidadVendida;
        cout << "enter the price of the item = ";
        cin >> precioArticulo;
        facAcum =  cantidadVendida* precioArticulo;
        factura = facAcum + factura ;
        contador ++;

    } while ( cantidadVendida != 0 );

    cout << "\n";
    cout << "INVOICE" << endl;
    cout << "\n";
    cout << "Total of the invoice $ " << factura << endl;
    cout << "\n";
return 0;   
}