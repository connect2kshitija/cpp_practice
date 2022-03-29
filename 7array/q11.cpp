#include <iostream>
using namespace std;
int main()
{

    int mat1[3][3], mat2[3][3], mat3[3][3], i, j, sum;

    cout << "Enter 1st Matrix : " << endl;
    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cin >> mat1[i][j];
        }
    }

    cout << "Enter 2nd Matrix : " << endl;
    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cin >> mat2[i][j];
        }
    }

    cout << "1st Matrix is : " << endl;
    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cout << mat1[i][j] << endl;
        }
    }

    cout << "2nd Matrix is : " << endl;
    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cout << mat2[i][j] << endl;
        }
    }
    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            sum = 0;

            for (int k = 0; k <= 2; k++)
            {

                sum = sum + mat1[i][k] * mat2[k][j];
                mat3[i][j] = sum;
            }
        }
    }

    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cout << mat1[i][j] << " * " << mat2[i][j] << " = " << mat3[i][j] << endl;
        }
    }

    return 0;
}
