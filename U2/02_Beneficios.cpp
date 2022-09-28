/*In a certain company, its employees are evaluated at the end of each year.
The points that can be obtained in the evaluation start at 0.0 and can go up,
translating into better benefits. The points you can get
employees can be 0.0, 0.4, 0.6 or more, but not intermediate values
between the figures mentioned. Below is a table with the
levels corresponding to each score. The amount of money earned
on each level is $2,400 multiplied by the level score.

Level Score
Unacceptable 0.0
Acceptable 0.4
Merit 0.6 or more
Write a program that reads the user's score and indicates their level of performance,
as well as the amount of money the user will receive.
*/

#include <iostream>

using namespace std;

int main(){

    double puntuacion;
    float pago;
    double beneficio;

    pago = 2400;
    
    //preguntar por la puntuacion  
    cout << "Enter your score obtained 0.0,0.4 or 0.6 or more ";
    cin >> puntuacion;

    //salto de linea
    cout << "\n";

  if (puntuacion == 0.0 ){
    cout << "The score is unacceptable" << endl;
   }   
   else if (puntuacion == 0.4 ){
    cout << "The score is acceptable" << endl;
   }
    else if (puntuacion >= 0.6 && puntuacion <= 1){
    cout << "The score is Merit" << endl;
   }

   
    // line break
    cout << "\n";
    
    if ((puntuacion == 0.0)||( puntuacion == 0.4 )||(puntuacion >= 0.6)){
        beneficio = pago*puntuacion;
        cout << "The amount you will receive is: $" << beneficio << endl;
    }

    //Exercise: use the different comparisons ==, !=, <, >, <=, >=

    
    // line break
    cout << "\n";
    
    return 0;
}
 