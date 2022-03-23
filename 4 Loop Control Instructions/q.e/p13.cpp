#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int i, pop;
    float p = 10000, r = 10;

    for (i = 1; i <= 10; i++)
    {

        pop = p / pow(1 + r / 100, i);

        cout << "Population " << i << " year ago = " << pop<<endl;
    }

    return 0;
}