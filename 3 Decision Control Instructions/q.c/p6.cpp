#include <iostream>
using namespace std;
int main()
{

    int age_of_x, age_of_y, age_of_z;

    cout << "Enter age of X : ";
    cin >> age_of_x;

    cout << "Enter age of y : ";
    cin >> age_of_y;

    cout << "Enter age of z : ";
    cin >> age_of_z;

    if (age_of_x < age_of_y && age_of_x < age_of_z)
    {

        cout << "X is youngest and his age is = " << age_of_x;
    }

    else if (age_of_y < age_of_x && age_of_y < age_of_z)
    {

        cout << "Y is youngest and his age is = " << age_of_y;
    }

    else if (age_of_z < age_of_x && age_of_z < age_of_y)
    {

        cout << "Z is youngest and his age is = " << age_of_z;
    }

    return 0 ;
}