/*
Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad.
*/

#include<iostream>

using namespace std;

int main()
{
    //we declare the variables
    int contador = 1;
    float cantidadVendida;
    float precioArticulo;
    float factura;
    float facAcum = 0;

    do
    {
        //we ask how many products you sold
        cout << "Enter the amount sold = ";
        cin >> cantidadVendida;
        //we ask how much the product costs
        cout << "Enter the price of the item = ";
        cin >> precioArticulo;

        //does the multiplication of product by price
        facAcum =  cantidadVendida* precioArticulo;
        //each operation that the facAcum is doing is saved and so on until it puts a zero but this is with all the products
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