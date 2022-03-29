#include <iostream>
using namespace std;
void modify(int *arr, int n)
{
    for (int i = 0; i < 10; i++)
    {

        *arr = *arr * 3;
        arr++;
    }
}
int main()
{

    int i;
    static int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Orignal array is : " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    modify(arr, 10);
    cout << "\nModified Array is : " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    return 0;
}