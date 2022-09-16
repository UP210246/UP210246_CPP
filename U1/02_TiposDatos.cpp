/*
Unidad 1. Yahir Garcia Alba 
Fecha: 16/09/2022
Descripcion:Muestras los diferentes tipos de datos en c++
*/

//librerias para menejo de entradas y salidas de pantalla
#include <iostream>
//librerias para el uso de print y scanf
#include<stdio.h>

//uso del namespace para evitar el std::
using namespace std;

//Funcion pricipal de tipo entero
int main (){

    //Mas informcaion en:
    //https://www.geeksforgeeks.org/c-data-types/
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;

    cout << "Este program muestra lso tipos de datos. \n";
    cout << "El numero entero es:" << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) <<"bytes" << endl;
    cout << "El numero del flotante es: " << flotante  << endl;
    cout << "El tamaño flotante es: " << sizeof(flotante) << "bytes" << endl;
    cout << "El numero double es: " << grande << endl;
    cout << "El tamaño del double es: " << sizeof(grande) << "bytes" << endl;
    cout << "El numero char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof(caracter)<< "byte" << endl;

    cout << "========================" << endl;

    //Mas informacion en:
    //https://cplusplus.com/reference/cstdio/printf/
    printf("Usando la funcion printf\n");
    printf("El numero entero es: %i \n", entero);
    printf("El numero flotante es: %3.1f \n", flotante);

    //Al ser una funcion debe retornar un valor, en este caso 0 
    return 0;


}