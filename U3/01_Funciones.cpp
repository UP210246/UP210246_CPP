#include <iostream>

using namespace std;

//Prototipado de funciones
int getMaxVal(int num1, int num2);

//Función principal
int main(){
    int num1, num2;
    int valorMaximo;

    cout << "Dame un número: ";
    cin >> num1;
    cout << "Dame otro número: ";
    cin >> num2;

    cout << "\n ================ \n";
    valorMaximo =getMaxVal(num1, num2);

    cout << "El valor máximo es: " << valorMaximo << endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    return (num1 > num2)?num1:num2;
}