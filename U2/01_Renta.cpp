/*
    Unidad 2.Ejercio de Renta
    Autor: Yahir Garcia Alba
    Fecha: 22/09/2022
    Descripcion:
        Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:
        Renta	Tipo impositivo
        Menos de $10,000	5%
        Entre $10,000 y $20,000	15%
        Entre $20,000 y $35,000	20%
        Entre $35,000 y $60,000	30%
        Más de $60,000	45%
        Escribir un programa que pregunte al usuario su renta anual y muestre por 
        pantalla el tipo impositivo que le corresponde.
*/

#include <iostream>

using namespace std;

int main(){
    int rentaCasa;
    float impuestoCasa;
    float impuestoCasaTotal;
    float montoCasas;
    float montoCasasTotal;

    //preguntar por precio de renta 
    cout << "Ingrese la renta de su casa ";
    cin >> rentaCasa;

    //salto de linea
    cout << "\n";

        //renta de casa para saber porcentaje
        if (rentaCasa >0 && rentaCasa <= 10000 )
            impuestoCasa = 0.05;
        else if (rentaCasa>=10000 && rentaCasa <= 20000 )
            impuestoCasa = 0.15;
        else if (rentaCasa>=20000 && rentaCasa <= 35000 )
            impuestoCasa = 0.20;
        else if (rentaCasa>=35000 && rentaCasa <= 60000 )
            impuestoCasa = 0.30;
        else if (rentaCasa > 60000 )
            impuestoCasa = 0.45;


    //Impuesto de la casa en porcentaje
    impuestoCasaTotal=impuestoCasa*100;
    cout << "El impuesto es del " << impuestoCasaTotal << " % \n" << endl;
    //monte de porcentaje envace a la renta
    montoCasas=(rentaCasa*impuestoCasa);
    cout << "El monto del porcentaje: $" << montoCasas << "\n" << endl;
    //renta mas porcetaje 
    montoCasasTotal=(montoCasas+rentaCasa);
    cout << "Monto de renta con porcentaje: $" << montoCasasTotal << "\n" << endl;
}