#include <iostream>
using namespace std;
long pow(int ,int);
int main()
{
    int a, b;
    long power;

    cout << "Enter Value of a : ";
    cin >> a;
    cout << "Enter Value of b : ";
    cin >> b;

    power = pow(a, b);

    cout << "The value of " << a << " to power " << b << " is " << power << endl;

    return 0;
}
long pow(int a,int b)
{
    int i;
    long power=1;

    for(i=1;i<=b;i++)
    {
        power=power*a;
    }
    return(power);
}