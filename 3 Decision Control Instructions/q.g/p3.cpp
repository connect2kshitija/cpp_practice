#include <iostream>
using namespace std;
int main()
{

    float hard, carbon, tensile;

    cout << "Enter hardness of steel : ";
    cin >> hard;

    cout << "Enter Carbon content of steel : ";
    cin >> carbon;

    cout << "Enter Tensile Strength of steel :";
    cin >> tensile;

    if (hard > 50 && carbon < 0.7 && tensile > 5600)
    {
        cout << "Grade is 10 " << endl;
        exit(0);
    }

    if (hard > 50 && carbon < 0.7 && tensile <= 5600)
    {
        cout << "Grade is 9" << endl;
        exit(0);
    }

    if (hard <= 50 && carbon < 0.7 && tensile > 5600)
    {
        cout << "Grade is 8 " << endl;
        exit(0);
    }

    if (hard > 50 && carbon >= 0.7 && tensile > 5600)
    {
        cout << "Grade is 7 " << endl;
        exit(0);
    }

    if (hard > 50 || carbon < 0.7 || tensile > 5600)
    {
        cout << "Grade is 6" << endl;
        exit(0);
    }

    else
    {

        cout << "Grade is 5" << endl;
    }

    return 0;
}