#include <iostream>
using namespace std;
int main()
{

    int arr[10], i, j;

    cout << "Enter 10 Elements of Array : "<<endl;
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        if( arr[i] == arr[10 - (i + 1)])
        cout << arr[i];
    }
    return 0;
}