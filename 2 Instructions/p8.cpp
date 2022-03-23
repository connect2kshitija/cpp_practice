#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int angle, rad, sum;

    cout << "Enter Angle : ";
    cin >> angle;

    rad = 3.14 / 180 * angle;
    sum = pow(sin(rad), 2) + pow(cos(rad), 2);

    cout << "sum is equal to : " << sum;
}