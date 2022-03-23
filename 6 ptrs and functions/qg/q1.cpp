#include <iostream>
#include <math.h>
using namespace std;
void fun(int *sum, int *avg, double *stddev)
{

    int num1, num2, num3, num4, num5;
    cout << "Enter Five Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    *sum = num1 + num2 + num3 + num4 + num5;

    *avg = *sum / 5;

    *stddev = sqrt((pow((num1 - *avg), 2) + pow((num2 - *avg), 2) + pow((num3 - *avg), 2) + pow((num4 - *avg), 2) + pow((num5 - *avg), 2)) / 4);
}
int main()
{

    int sum, avg;
    double stddev;

    fun(&sum, &avg, &stddev);

    cout << "sum = " << sum << "\naverage = " << avg << "\nStandard Deviation = " << stddev << endl;
    return 0;
}