#include <iostream>
using namespace std;
int main()
{

    int a[5][5] = {
        {12, 34, 56, 73, 23},
        {13, 45, 76, 89, 76},
        {34, 25, 64, 76, 43},
        {32, 56, 47, 83, 41},
        {56, 98, 76, 54, 23}};
    int i, j, big;
    big = a[0][0];

    cout << "The 5*5 Matrix is :" << endl;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << a[i][j] << endl;
            if (a[i][j] > big)
            {
                big = a[i][j];
            }
        }
    }
    cout << "Largest Number is:" << big << endl;
    return 0;
}