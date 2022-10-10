#include<iostream>

using namespace std;

int main()
{
    int contador = 1;
    float temperatura;
    float tempAcum = 0;
    float temMax = 0;
    float temMin = 9999;
    do
    {
        cout << "give me the temperature: ";
        cin >> temperatura;
        tempAcum += temperatura;
        contador ++;
        if (temperatura <= temMin )
            temMin = temperatura;
        if (temperatura >= temMax )
            temMax = temperatura;
    } while (contador <= 6);

    cout << "\n";
    cout << "The avergangxcde of temperature today is : " << tempAcum/6 << endl;
    cout << "\n";
    cout << "The avergange of temperature maximum today is : " << temMax << endl;
    cout << "\n";
    cout << "The avergange of temperature minimal today is : " << temMin << endl;
    cout << "\n";
return 0;
    
}