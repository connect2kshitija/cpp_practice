//Overtime payment of Employees
#include <iostream>
using namespace std;
int main()
{

    float pay;
    int i = 1, Whr;
    while (i <= 10)
    {
        cout << "Enter Working time of employees here : ";
        cin >> Whr;
        if (Whr >= 40)
        {
            pay = 12 * (Whr - 40);
            cout << "Payment of Overtime Job : "<<pay<<endl;
        }
        else
        {
            pay = 0;
            cout << "No Overtime Work";
        }
        i++;
    }
    return 0;
}