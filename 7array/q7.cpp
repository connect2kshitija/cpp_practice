#include <iostream>
using namespace std;
int main()
{

    int a[4][4], i, j, temp;

    cout << "Enter Value of 4*4 matrix :" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            cin >> a[i][j];
        }
    }

    cout << "Matrix Entered is :" << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            cout << a[i][j] << endl;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

     cout<<"Transpose of Matrix is:"<<endl;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            cout<<a[i][j]<<endl;
            
        }
    }
    return 0;
}