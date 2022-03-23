#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    float a, p, r, q, n;
    int i;

    for (i = 1; i <= 10; i++)
    {

        cout << "Enter principal Amount : ";
        cin >> p;
        cout << "Enter The Rate of intrest :";
        cin >> r;
        cout << "Enter Number of Years : ";
        cin >> n;
        cout << "Enter the compounding Period : ";
        cin >> q;

        a = p + pow((1 + r / q), n * q);
        cout << "Total Amount : " << a << endl;
    }
    return 0;
}