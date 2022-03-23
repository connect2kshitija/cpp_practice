#include <iostream>
using namespace std;
int main()
{

    int i = 1, j;
    float fact, sum = 0.0;

    while (i <= 7)
    {
        fact = 1.0;
        for (j = 0; j <= 7; j++)
            fact = fact * j;

        sum = sum + i / fact;
        i++;
    }

    cout << "Sum of series = " << sum;
    return 0;
}