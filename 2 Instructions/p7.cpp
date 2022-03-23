#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    float x, y, r, theta;

    cout << "Enter x Co-ordinates:";
    cin >> x;

    cout << "Enter y Co-ordinates:";
    cin >> y;


    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
    theta = theta * 180 / 3.14;

    cout << "r = " << r << " and theta = " << theta;

    return 0;
}