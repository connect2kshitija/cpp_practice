#include <iostream>
using namespace std;
int main()
{

    int num;

    cout << "Enter Number : ";
    cin >> num;

    if (num < 0)
    {
        num = num * -1;
        cout << "The absolute value for  given number is : " << num;
    }
    return 0;
}