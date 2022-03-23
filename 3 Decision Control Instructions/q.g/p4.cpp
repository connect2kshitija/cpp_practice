#include <iostream>
using namespace std;
int main()
{

    int days;
    float fine;

    cout << "Enter how many Days it's late : ";
    cin >> days;

    if (days >= 1 && days <= 5)
    {
        fine = days * 50 / 100.0;
        cout << "Fine Rs = " << fine << endl;
    }
    if (days >= 6 && days <= 10)
    {
        fine = 5 * 50 / 100.0 + (days - 5) * 1;
        cout << "Fine Rs = " << fine << endl;
    }
    if (days > 10 && days <= 30)
    {
        fine = 5 * 50 / 100.0 + 5 * 1 + (days - 10) * 5;
        cout << "Fine Rs = " << fine << endl;
    }
    else
    {
        cout << "Membership is cancelled" << endl;
    }
    return 0;
}