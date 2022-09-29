# Unit 2 Exercise

## Exercise 1
### 01_Renta.CPP

### DESCRIPTION


<pre>The tax brackets for the income statement in a given country are the following:

Income tax rate
Less than $10,000 5%
Between $10,000 and $20,000 15%
Between $20,000 and $35,000 20%
Between $35,000 and $60,000 30%
More than $60,000 45%

Write a program that asks the user for their annual income and displays by
display the corresponding tax rate.
</pre>


### PROGRAM

```C++

    #include <iostream>

    using namespace std;

    int main(){
        int rentaCasa;
        float impuestoCasa;
        float impuestoCasaTotal;
        float montoCasas;
        float montoCasasTotal;

        //ask for rental price
        cout << "Enter the rent of your house";
        cin >> rentaCasa;

        //line break
        cout << "\n";

            // house rent to know percentage
            if (rentaCasa >0 && rentaCasa <= 10000 )
                impuestoCasa = 0.05;
            else if (rentaCasa>=10000 && rentaCasa <= 20000 )
                impuestoCasa = 0.15;
            else if (rentaCasa>=20000 && rentaCasa <= 35000 )
                impuestoCasa = 0.20;
            else if (rentaCasa>=35000 && rentaCasa <= 60000 )
                impuestoCasa = 0.30;
            else if (rentaCasa > 60000 )
                impuestoCasa = 0.45;


        //house tax in percent
        impuestoCasaTotal=impuestoCasa*100;
        cout << "The tax is from" << impuestoCasaTotal << "% \n" << endl;
        //amount of percentage envaced to rent
        montoCasas=(rentaCasa*impuestoCasa);
        cout << "Rent amount with percentage: $" << montoCasas << "\n" << endl;
        // rent plus percentage 
        montoCasasTotal=(montoCasas+rentaCasa);
        cout << "Rent amount with percentage: $" << montoCasasTotal << "\n" << endl;
    }
```

### EXPlANATION

<pre>
What this program does is first request the rent of a house after evaluating in what
range is the price given by the user and thus with some nested ifs to be able to determine
What will be their respective percentage?

As a result, it gives the rent, percentage, percentage of the rent and sum of the rent and the percentage of rent.
</pre>

### TESTS
<br>

#### Entry with $7000
![7000](/imagenes/7000.png "imagen de 7000")

#### Entry with $15000
![15000](/imagenes/15000.png "imagen de 15000")

#### Entry with $25000
![25000](/imagenes/25000.png "imagen de 25000")

#### Entry with $45000
![45000](/imagenes/45000.png "imagen de 45000")

#### Entry with $65000
![65000](/imagenes/65000.png "imagen de 65000")


<br>
<br>
<br>

## Exercise 2
### 02_Benefios.CPP

### DESCRIPTION

<pre>In a certain company, its employees are evaluated at the end of each year.
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
</pre>

### PROGRAM


```C++
    #include <iostream>

using namespace std;

int main()
{

  double puntuacion;
  float pago;
  double beneficio;

  pago = 2400;

  // preguntar por la puntuacion
  cout << "Enter your score obtained 0.0,0.4 or 0.6 or more ";
  cin >> puntuacion;

  // salto de linea
  cout << "\n";

  // validates user values ​​and determines
  if (puntuacion == 0.0)
  {
    cout << "The score is unacceptable" << endl;
  }
  else if (puntuacion == 0.4)
  {
    cout << "The score is acceptable" << endl;
  }
  else if (puntuacion >= 0.6 && puntuacion <= 1)
  {
    cout << "The score is Merit" << endl;
  }

  // line break
  cout << "\n";

  // makes payment score
  if ((puntuacion == 0.0) || (puntuacion == 0.4) || (puntuacion >= 0.6))
  {
    beneficio = pago * puntuacion;
    cout << "The amount you will receive is: $" << beneficio << endl;
  }

  // Exercise: use the different comparisons ==, !=, <, >, <=, >=

  // line break
  cout << "\n";

  return 0;
}
```
### EXPlANATION

<pre>Receiving a bonus for the work done depending on the percentage obtained, which are 0.0, 0.4 and 0.6 up to 1 and the money is 2400 and the money will be collected according to the bonus</pre>

### TESTS
<br>

#### Entry with 0.0
![0](/imagenes/0.0.png "image of 0.0")
#### Entry with 0.4
![6](/imagenes/0.4.png "image of 0.0")
#### Entry with 0.6 to 1
![8](/imagenes/0.8.png "image of 0.8")
