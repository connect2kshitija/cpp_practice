#include <iostream>
#include <math.h>
using namespace std;
float area(float a, float b, float c)
{
    float s, m, x;
    s = (a + b + c) / 2;
    m = s * (s - a) * (s - b) * (s - c);
    x = sqrt(m);

    return (x);
}
int main()
{
    float a, b, c, z;

    cout << "Enter three sides of the triangle :" << endl;
    cin >> a >> b >> c;
    z = area(a, b, c);
    cout << "\n Area Of Triangle = \n"
         << z;
    return 0;
}