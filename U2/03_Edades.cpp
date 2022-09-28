/*Exercise 3. Write a program for a company that has game rooms for all ages and wants to automatically calculate the price to charge its customers to enter. 
The program must ask the user for the customer's age and display the price of the ticket. 
Yes the client is under 4 years old can enter for free, if they are between 4 and 18 years old they must pay $5 and if they are over 18 years old, $10.
*/

#include <iostream>

using namespace std;

int main(){

    int age;
    
    //ask about age 
    cout << "how old are you ?";
    cin >> age;

    //salto de linea
    cout << "\n";

  if (age <= 3){
    cout << "Your ticket is free " << endl;
   }   
   else if (age >= 4 && age <=18  ){
    cout << "Your ticket is 5 pesos" << endl;
   }
    else if (age >= 19 ){
    cout << "Your ticket is 10 pesos" << endl;
   }
    // line break
    cout << "\n";
    
    return 0;
}
 