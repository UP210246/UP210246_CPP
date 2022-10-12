#include <iostream>

using namespace std;

int main()
{
    int number;
    string result;

    cout << "Entry a number decimal ";
    cin >> number;
    do
    {
        if (number > 0)
        {
            while (number != 0)
            {
                // if en una linea con un else
                result = (number % 2 == 0) ? "0" + result : "1" + result;

                number /= 2;
            }
        }
        else if (number == 0)
        {
            cout << "Mayor a cero";
        }

        // salto de linea
        cout << "\n";
    } while (number < 0);

    cout << "The number in binary is: " << result << endl;

    // salto de linea
    cout << "\n";

    return 0;
}