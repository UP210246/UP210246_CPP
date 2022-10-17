    #include <iostream>
    #include <cmath>

    using namespace std;

    #include <iomanip>

    float solveEquation(float worth) {
        return pow(worth,2) - worth- 12;
    }
    int main(){
    float a;
    float b;
    float c = (a+b)/2;
    float ya = solveEquation(a);
    float yb = solveEquation(b);
    float yc = solveEquation(c);
    float error = 0.01;
    int i;

    cout << "Entre a value of (a): ";
    cin >>  a;
    cout << endl;
    cout << "Entre a value of (b): ";
    cin >>  b;
    cout << "\n";
    for (i = 1, i = 0; i < 121; i++)
    {      
    cout << "_";
    }
    cout << "\n";
    
    cout     << "|" 
             << "\t" << "a" << "\t"
             << "\t" << "b" << "\t"
             << "\t" << "c" << "\t"
             << "\t" << "ya" << "\t" << "\t"
             << "\t" << "yb" << "\t"
             << "\t" << "\t" << "yc" << "\t" << "\t" 
             << "|" << endl;
             cout << "|";
        for (i = 1, i = 0; i < 119; i++)
        {
            cout << "_";
        }
        cout << "|";
    do
    {
            c = (a+b)/2;
            ya = solveEquation(a);
            yb = solveEquation(b);
            yc = solveEquation(c);
        if (ya*yc<0)
        {
            b = c;
        }
        else if (yc*yb<0)
        {
            a = c;
        }
        else
        {
            cout << "No root.";
        }
    cout << "\n";
    cout << fixed;
    cout << setprecision(3)<< "|" 
             << "\t" << a << "\t"
             << "\t" << b << "\t"
             << "\t" << c << "\t"
             << "\t" << ya << "\t" << "\t"
             << "\t" << yb << "\t"
             << "\t" << "\t" << yc << "\t" << "\t" 
             << "|" << endl;
             cout << "|";
            
    for (i = 1, i = 0; i < 119; i++)
            {
                cout << "_";
            }
            cout << "|";
    } while (abs(yc)>= error);
    return 0;    
}
    
    
