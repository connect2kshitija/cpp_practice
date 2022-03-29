#include <iostream>
#include <stdlib.h>
#include <malloc.h>
using namespace std;
int main()
{

    int *arr, sum, n, i, j, pos, num;

    cout << "Enter value of n for (n*n)matrix" << endl;
    cin >> n;
    arr = calloc(n * n, 2);

    cout << "Enter numbers : ";
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {

            cin >> num;
            pos = i * n + j;
            arr[pos] = num;
        }
    }
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n * n; j += n)
        {

            cout << arr[j];
        }
        cout << "\n";
    }

    sum = detmat(arr, n);
    free(arr);
    cout << "sum";
    return 0;
}
int detmat(int *arr, int order)
{

    int sign = 1, sum = 0, i, j, k, count, *arr2;
    int newsize, newpos, pos;

    if (order == 1)
    {
        return (arr[0]);
    }

    for (i = 0; i < order; i++, sign *= -1)
    {

        newsize = (order - 1) * (order - 1);
        arr2 = calloc(newsize, 2);
        for (j = 1; j < order; j++)
        {

            for (k = 0, count = 0; k < order; k++)
            {

                if (k == i)
                {
                    continue;
                }

                pos = j * order + k;

                newpos = (j - 1) * (order - 1) + count;

                arr2[newpos] = arr[pos];
                count++;
            }
        }
    }
    return(sum);
}