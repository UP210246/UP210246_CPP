#include <iostream>

using namespace std;

int main()
{

    int contador, i;
    float numMult, multiplicacion, contador2;

    // first it asks what number you want to multiply and saves it in the variable numMult
    cout << "What number do you want to multiply :";
    cin >> numMult;
    // salto de linea
    cout << "\n";
    // Then they ask how many times you want to multiply that number and save it in the variable counter 2
    cout << "Up to what number do you want to multiply it : ";
    cin >> contador2;

    cout << "\n";
    cout << "\n";
    // this is for is for the accountant
    for (contador = 1; contador <= contador2; contador++)
    {
        // this line does all the multiplication of each of the numbers and saves them in multiplication
        multiplicacion = contador * numMult;

        // this line is to do the construction of the table and make jumps in each step of the block
        cout << "|";
        for (i = 1, i = 0; i < 47; i++)
        {
            cout << "-";
        }
        cout << "|";
        cout << "\n";
        // this line does the printing of the table so that it is not out of date
        cout << "|"
             << "\t" << contador << "\t"
             << "x"
             << "\t" << numMult << "\t"
             << "="
             << "\t" << multiplicacion << "\t"
             << "|" << endl;
    }
    // FOR to close the table
    for (i = 1, i = 0; i < 49; i++)
    {
        cout << "-";
    }
    cout << "\n";
    cout << "\n";

    // Wait for the user to press a key to end the program
    cout << "Presiona enter para terminar.";
    int c = getchar();

    // Being a function, it must return a value, in this case 0
    return 0;
}