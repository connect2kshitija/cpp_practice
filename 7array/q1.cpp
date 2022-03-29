#include <iostream>

using namespace std;

int main()
{

    int arr1[5], arr2[5], i, j;

    cout << "Enter Elements of array:";
    for (i = 0; i < 5; i++)
    {
        cin >> arr1[i] ;
    }
    for (i = 0, j = 4; i < 5; i++, j--)
    {
        arr2[j] = arr1[i];
    }
    cout << "Elements in reverse order :";
    for (i = 0; i < 5; i++)
    {
        cout << arr2[i];
    }

    return 0;
}