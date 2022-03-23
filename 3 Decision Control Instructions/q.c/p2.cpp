#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter Number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number You Entered is Even";
    }
    else
        cout << "Number you Entered is odd";

    return 0;
}