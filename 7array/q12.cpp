#include <iostream>
using namespace std;
void shift(int *p)
{
    int j, k, i, t, tt;

    for (k = 0; k <= 3; k++)
    {

        for (i = 0; i <= 1; i++)
        {
            t = *(p + k * 5 + 0);

            for (j = 0; j <= 4; j++)
            {
                tt = *(p + 5 * k + j);
                *(p + 5 * k + j) = *(p + 5 * k + j + 1);
                *(p + 5 * k + j + 1) = tt;
            }

            *(p + 5 * k + j) = t;
        }
    }
}
int main()
{

    int p[4][5], i, j;

    for (i = 0; i <= 3; i++)
    {

        cout << "Enter Row Elements : " << endl;
        for (j = 0; j <= 4; j++)
        {

            cin >> p[i][j];
        }
    }

    for (i = 0; i <= 3; i++)
    {

        cout << "Row Elements are :" << i << endl;
        for (j = 0; j <= 4; j++)
        {

            cout << p[i][j] << endl;
        }
    }

    shift(*p);
    for (i = 0; i <= 3; i++)
    {
        cout << "\n Row Elements are : " << i << endl;
        for (j = 0; j <= 4; j++)
        {

            cout << p[i][j];
        }
    }

    return 0;
}