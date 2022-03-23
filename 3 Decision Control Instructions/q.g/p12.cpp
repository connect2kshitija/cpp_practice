#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    float ht, wt, bmi;

    cout << "Enter Height : ";
    cin >> ht;

    cout << "Enter Weight : ";
    cin >> wt;

    bmi = wt / (ht * ht);
    cout<<"Body Mass Index : "<<bmi;

    if (bmi > 15)
    {
        cout << "Starvation";
    }

    if (bmi >= 15.1 && bmi <= 17.5)
    {
        cout << "Anorexic";
    }

    if (bmi >= 17.6 && bmi <= 18.5)
    {
        cout << "Underweight";
    }

    if (bmi >= 18.6 && bmi <= 24.9)
    {
        cout << "Ideal";
    }

    if (bmi >= 25 && bmi <= 25.9)
    {
        cout << "Overweight";
    }

    if (bmi >= 30 && bmi <= 30.9)
    {
        cout << "Obese";
    }

    if (bmi >= 40)
    {
        cout << "Morbidly Obese";
    }

    return 0;
}