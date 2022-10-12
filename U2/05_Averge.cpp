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
        //Ask for the temperature
        cout << "give me the temperature: ";
        //keep the valor of temperature
        cin >> temperatura;
        //save the value 
        tempAcum += temperatura;
        //count down 
        contador ++;

        if (temperatura <= temMin )
            temMin = temperatura;
        if (temperatura >= temMax )
            temMax = temperatura;
    } while (contador <= 6);

    cout << "\n";
    cout << "Today's average temperature is: " << tempAcum/6 << endl;
    cout << "\n";
    cout << "The avergange of temperature maximum today is : " << temMax << endl;
    cout << "\n";
    cout << "The avergange of temperature minimal today is : " << temMin << endl;
    cout << "\n";
return 0;
    
}