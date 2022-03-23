#include <iostream>
using namespace std;
int main()
{

    int year;

    cout << "Enter Year : ";
    cin >> year;

    if (year % 100 == 0)
    {

        if (year % 400 == 0)
        {
            cout << "Year is leap year";
        }

        else
        {
            cout << "Year is not leap year";
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            cout << "Leap year";
        }
        else
        {
            cout << "Not Leap Year";
        }
    }
}