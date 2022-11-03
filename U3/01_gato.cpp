#include <iostream>

using namespace std;

void Tablero(int);
int main(){
    int tablero;
    Tablero(tablero);

    return 0;
}

void Tablero(int){

    for (int fila = 0; fila < 5; fila++)
    {
            for (int columna = 0; columna < 9; columna++)
            {
                if (fila == 1 || fila == 3){
                    cout << "-";
                }else{
                    cout << " ";
                }
                if (columna == 2 || columna == 5)
                {
                    cout<<"|";
                }
                
            }
        cout << "\n";
    }
}

char areaJuego[3][3]={{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'},};



int selecionarJudada ( ){
    int jugada;
    do
    {
        cout << "Dame tu jugada: ";
        cin >> jugada;
    } while (jugada <= 9 && jugada > 0 );
    return jugada;
}