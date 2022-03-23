#include <iostream>

using namespace std;

int fun(int j, int k)
{

    int r = 1, m, n = 0, t;

    if (k > j)
    {

        t = j;
        j = k;
        k = t;
    }
    else
    {

        if (j == k)
        {
            return j;
        }
    }

    while (1)
    {

        r = j / k;
        m = j - r * k;

        if (!(j % k))
        {
            n = k;
        }
        if (m == 0)
        {
            break;
        }       
    }
    j = k;
    k = m;
    n = m;

    return n;
}
int main()
{

    int j, k, t, r, z;
    cout << "\nEnter Two Numbers :" << endl;
    cin >> j >> k;
    z = fun(j, k);
    cout << "Gretest common Divisor of two Numbers is :" << z;
    return 0;
}