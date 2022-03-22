#include <iostream>
using namespace std;
int main()
{
    float km, m, cm, ft, inch;

    cout << "Enter the Distance between two cities in km : ";
    cin >> km;

    m = km / 100;
    cm = m / 100;
    inch = 2.5 * cm;
    ft = 12 * inch;

    cout << "\n Distance in kilometer : "
         << km;
    cout << "\n Distance in meter : "
         << m;
    cout << "\n Distance in centimeter : "
         << cm;
    cout << "\n Distance in inch : "
         << ft;
    cout << "\n Distance in feet : "
         << inch;
    return 0;
}