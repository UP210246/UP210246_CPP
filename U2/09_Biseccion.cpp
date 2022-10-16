    #include <iostream>
    #include <cmath>

    using namespace std;

    float solveEquation(float worth) {
        return pow(worth,2) - 1  *(worth) - 12;
    }
    float a;
    float b;
    float c;
    float ya = solveEquation(a);
    float yb = solveEquation(b);
    float yc = solveEquation(c);

    cout << "Entre a value of (a): ";
    cin >>  a;
    
    
