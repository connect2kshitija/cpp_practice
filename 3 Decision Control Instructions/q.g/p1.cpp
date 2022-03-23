#include <iostream>
using namespace std;
int main()
{

    int yr;

    cout << "Enter year here : ";
    cin >> yr;
    
    if (yr % 4 == 0 || yr == 100 && yr % 400 == 0)
    {

        cout << "Year is Leap Year ";
    }
    else
    {

        cout << "Year is not leap Year";
    }
    return 0;
}