
#include<iostream>

using namespace std;

void cnahge (int);
void changecoins (int);
void printchange (string);

int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte  = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;

void changecoins (int dinero)
{
    int residue = 0;
    int counter = 0;

    do
    {
        (dinero-10>=0)?diez++,dinero=dinero-10
        : (dinero-5>=0)?cinco++,dinero=dinero-5
        : (dinero-2>=0)?dos++,dinero=dinero-2
        : (dinero-1>=0)?uno++,dinero=dinero-1
        : counter++;
    } while (counter==0);

}

void change (int dinero)
{
    int residue = 0;
    int counter = 0;

    do
    {
        (dinero-500>=0)?quinientos++,dinero=dinero-500
        : (dinero-200>=0)?doscientos++,dinero=dinero-200
        : (dinero-100>=0)?cien++,dinero=dinero-100
        : (dinero-50>=0)?cincuenta++,dinero=dinero-50
        : (dinero-20>=0)?veinte++,dinero=dinero-20
        : counter++;
    } while (counter==0);

    changecoins (dinero);

}

void printchange (string type)
{
    cout << "$500: ";
    cout << quinientos;
    cout << endl;
    cout << "$200: ";
    cout << doscientos;
    cout << endl;
    cout << "$100: ";
    cout << cien;
    cout << endl;
    cout << "$50: ";
    cout << cincuenta;
    cout << endl;
    cout << "$20: ";
    cout << veinte;
    cout << endl;
    cout << "$10: ";
    cout << diez;
    cout << endl;
    cout << "$5: ";
    cout << cinco;
    cout << endl;
    cout << "$2: ";
    cout << dos;
    cout << endl;
    cout << "$1: ";
    cout << uno;
    cout << endl;
}

int main()
{
    int munoy;

    cout << "Munoy to enter: ";
    cin >> munoy;
    
    change (munoy);
    printchange (" ");

    return 0;
}