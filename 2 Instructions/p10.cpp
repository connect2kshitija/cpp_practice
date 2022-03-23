#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int wcf, temp, vel;
    
    cout << "Enter Temprature : ";
    cin >> temp;
    
    cout << "Enter Velocity : ";
    cin >> vel;

    wcf = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(vel, 0.16);

    cout << "Wind Chill Factor For Given Temprature And Velocity Is : " << wcf;
}