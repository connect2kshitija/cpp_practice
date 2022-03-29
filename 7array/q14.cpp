#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int data[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    float xi, std[15], mean = 0;
    int i, n = 15;
    for (i = 0; i <= 14; i++)
    {

        cout << data[i];
    }
    for (i = 0; i <= 14; i++)
    {

        mean = mean + data[i];
    }
    mean = mean / n;

    for (i = 0; i <= 14; i++)
    {

        std[i] = sqrt(pow((data[i] - mean), 2)) / n;
    }
    cout << "Mean : " << mean;
    for (i = 0; i <= 14; i++)
    {
        cout << "Standard Deviation : " << data[i] << td[i];
    }
    return 0;
}