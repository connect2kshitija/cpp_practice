//Factorial
#include <iostream>
using namespace std;
int main()
{

    int num, i = 1;
    unsigned long int fact = 1;

    cout << "Enter number Here : ";
    cin >> num;

    while (i <= num)
    {

        fact = fact * i;
        
        i++;
    }

    cout << "Factorial = " << fact;

    return 0;
}