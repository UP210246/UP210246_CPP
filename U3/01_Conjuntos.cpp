/*
Autor: Yahir Garcia Alba 
Email: up210246@alumnos.upa.edu.mx 
Fecha: 
Descripcion: 
*/
#include <iostream>

using namespace std;

int conjunto [5][5];

int main(){

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "valor [" << row << "][" << col << "]: " ;
            cin >> conjunto [row][col];
        }
    }

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << conjunto [row][col]<< " ";
        }
        cout << endl;
    }

    
    return 0;
}