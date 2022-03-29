#include <iostream>
using namespace std;
int main()
{

    int mat1[6][6], mat2[6][6], mat3[6][6], i, j;
    cout << "Enter first matrix : " << endl;
    for (i = 0; i <= 5; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 5; j++)
        {

            cin >> mat1[i][j];
        }
    }
    cout << "Enter 2nd Matrix :" << endl;
    for (i = 0; i <= 5; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 5; j++)
        {

            cin >> mat2[i][j];
        }
    }
    cout << "1st Matrix : " << endl;
    for (i = 0; i <= 5; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 5; j++)
        {

            cout << mat1[i][j] << endl;
        }
    }
    cout << "2nd matrix :" << endl;
    for (i = 0; i <= 5; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 5; j++)
        {

            cout << mat2[i][j] << endl;
        }
    }

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (i = 0; i <= 5; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 5; j++)
        {
            cout << mat1[i][j] << " + " << mat2[i][j] << " = " << mat3[i][j] << endl;
        }
    }
    return 0;
}