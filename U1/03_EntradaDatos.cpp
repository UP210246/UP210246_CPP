/* Unidad 1. Entrada de Datos 
   Autor: Yahir Garcia Alba
   Fecha: 21/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario 
*/

//libreria para manejo de entradas y salida de pantalla 
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>

//uso de namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero 
int main()
{
    int entero;         //%i numeros
    float flotante;     //%f numeros con decimales 
    double grande ;     //%d numeros muy grandes
    char caracter;      //%c letras 
    
    cout << "Este programa muestra el ingreso de datos por el usario. \n";
    cout << "Ingresa un tipo de dato de tipo entero ";
    cin >> entero;
    cout << "El dato ingresado es: "<< entero << endl;

    cout <<"===========" << endl;

    printf("Usando la función printf y scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es:  %i \n", entero);

    printf("\n");
    printf("\n");


    //Al ser una función debe retornar un valor, en este caso 0
    return 0;

}