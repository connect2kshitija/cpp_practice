#include <iostream>
using namespace std;
int main()
{

    int arr[3][3], i, j, count = 0;

    cout << "Enter Matrix Elements : " ;
    for (i = 0; i <= 2; i++)
    {
        cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cin >> arr[i][j];
        }
    }

    cout << "\nMatrix Entered is : "<<endl;
    for (i = 0; i <= 2; i++)
    {
          cout<<"\n";
        for (j = 0; j <= 2; j++)
        {

            cout << arr[i][j] ;
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {

            if (arr[i][j] == arr[j][i])
            {
                count++;
            }
        }
    }
    if (count == 6)
    {

        cout << "\nMatrix is Symmetric " << endl;
    }
    else
    {

        cout << "\nMatrix is not Symmetric" << endl;
    }
    return 0;
}