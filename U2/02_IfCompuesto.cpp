/* Unidad 2. Condicionales
   Autor: Yahir Garcia Alba
   Fecha: 22/09/2022
   Descripción: Muestra el uso del if simple 
*/

#include<iostream>

using namespace std;

int main(){
    int numero;
    int dato = 1;

    cout << "ingresa un numero entero: ";
    cin >> numero ;
    if (numero == dato){
        cout <<"El numero es igual a dato \n"<< endl;
    }
    else{
        cout << "El numero es diferente del dato \n"<< endl;
        
    }
    return 0;
}

