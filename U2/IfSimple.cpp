/* Unidad 2. Condicionales
   Autor: Yahir Garcia Alba
   Fecha: 22/09/2022
   Descripción: Muestra el uso del if simple 
*/

//libreria para manejo de entradas y salida de pantalla 
#include <iostream>

//uso de namespace para evitar el std::
using namespace std;

int main(){
    int numero;
    int dato=1;

    cout << "ingresa un numero entero ";
    cin >> numero;
    if (numero==dato){
        cout <<"El numero es igual a dato \n " <<endl;
    }
    
    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}