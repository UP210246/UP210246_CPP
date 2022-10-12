#include <iostream>

using namespace std;

int main(){
 
   int contador, i;
   float numMult, multiplicacion, contador2;

    cout << "Que multiplicacion quieres: ";
    cin >> numMult;
    // salto de linea
    cout << "\n";
    cout << "Hasta que numero lo quieres multiplicar ";
    cin >> contador2;

    cout << "\n";
    cout << "\n";
   
   for(contador = 1; contador <= contador2; contador++){
    multiplicacion=contador*numMult;
    cout << "|";
    for (i=1, i = 0; i < 47; i++)
    {
        cout << "-";
    }
    cout << "|";
    cout << "\n";
    cout <<"|"<< "\t" << contador << "\t" << "x" << "\t" << numMult<< "\t" <<"=" << "\t"<< multiplicacion<<"\t"<< "|" << endl;
   }

    cout << "\n";
    cout << "\n";

    //Espera a que el usuario presione una tecla para terminar el programa
    cout << "Presiona enter para terminar.";
    int c = getchar();

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}