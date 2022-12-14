/*Exercise 4. The Bella Napoli pizzeria offers vegetarian and non-vegetarian pizzas to its customers. The ingredients for each type of pizza appear below.
- Vegetarian ingredients: Pepper and tofu.
- Non-vegetarian ingredients: Pepperoni, Ham and Salmon.
Write a program that asks the user if he wants a vegetarian pizza or not, and based on his answer shows him a menu with the ingredients available for him to choose from.
You can only choose one ingredient besides the mozzarella and tomato that are in all the pizzas.
At the end it should be shown on the screen if the chosen pizza is vegetarian or not and all the
ingredients it contains.*/

#include <iostream>

using namespace std;

int main()
{

    int typePizza;
    int ingredientVegetal;
    int ingredientNoVegetal;

    cout << "MENU" << endl;
    // salto de linea
    cout << "\n";

    cout << "Vegetarian ingredients: Pepper and tofu." << endl;
    cout << "Non-vegetarian ingredients: Pepperoni, Ham and Salmon." << endl;

    cout << "\n";

    // ask about Pizza
    cout << "Do you want vegetarian pizza?" << endl;
    cout << "1.- vegetarian pizza " << endl;
    cout << "2.- No vegetarian pizza " << endl;

    cout << "\n";
    //keep the variable in typepizza
    cout << "select the type of pizza" << endl;
    cin >> typePizza;

    // line break
    cout << "\n";

    cout << "Note choose only one ingredient" << endl;
    
    // salto de linea
    cout << "\n";

    //validate variable if 1 or 2
    if (typePizza == 1)
    {
        cout << "Vegetarian ingredients: Pepper and tofu." << endl;
        cout << "3.-Pepper" << endl;
        cout << "4.-tofu" << endl;
        cin >> ingredientVegetal;
    }
    else if (typePizza == 2)
    {
        cout << "Non-vegetarian ingredients: Pepperoni, Ham and Salmon." << endl;
        cout << "5.-Peperoni" << endl;
        cout << "6.-Ham and Salmon" << endl;
        cin >> ingredientNoVegetal;
    }
    else
    {
        cout << "ERROR" << endl;
    }
    //line break
    cout << "\n";

    // validate variable if 3 or 4
    if (ingredientVegetal == 3)
    {
        cout << "Your pizza is vegetarian with Mozzarella, Tomato and Peper" << endl;
    }
    else if (ingredientVegetal == 4)
    {
        cout << "Your pizza is vegetarian with Mozzarella, Tomato and Tofu" << endl;
    }
    
    // validate variable if 5 or 6
    if (ingredientNoVegetal == 5)
    {
        cout << "Your pizza is non-vegetarian Mozzarella, Tomato with pepperoni" << endl;
    }
    else if (ingredientNoVegetal == 6)
    {
        cout << "Your pizza is not vegetarian Mozzarella, Tomato with Ham and Salmon" << endl;
    }
    cout << "\n";

    return 0;
}
