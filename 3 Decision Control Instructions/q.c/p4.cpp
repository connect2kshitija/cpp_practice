#include <iostream>
using namespace std;
int main()
{
    int leapdays, firstday, yr;
    long int normaldays, totaldays;

    cout << "Enter Year : ";
    cin >> yr;

    normaldays = (yr - 1) / 365L;
    leapdays = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 400;
    totaldays = normaldays + leapdays;
    firstday = totaldays % 7;

    if (firstday == 0)
    {
        cout << "Monday";
    }
    if (firstday == 1)
    {
        cout << "Tuesday";
    }
    if (firstday == 2)
    {
        cout << "Wednesday";
    }
    if (firstday == 3)
    {
        cout << "Thursday";
    }
    if (firstday == 4)
    {
        cout << "Friday";
    }
    if (firstday == 5)
    {
        cout << "Saturday";
    }
    if (firstday == 6)
    {
        cout << "Sunday";
    }
    return 0;
}