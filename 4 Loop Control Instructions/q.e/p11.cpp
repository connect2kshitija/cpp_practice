#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    float p, result = 0;
    cout << "Enter Value of x : ";
    cin >> x;
    for (p = 1; p <= 7; p++)
    {
        if (p == 1)
        {
            result = result + (x - 1.0) / x;
        }
        else

            result = result + (1.0 / 2) * pow((x - 1.0) / x, p);
    }

    cout << "Natural Logarithm : " << result;
    return 0;
}