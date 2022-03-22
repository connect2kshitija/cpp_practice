#include <iostream>
using namespace std;
int main()
{

    float bp, dp, hp, gp;

    cout << "Enter basic salary of Ramesh:";
    cin >> bp;

    dp = 0.4 * bp;
    hp = 0.2 * bp;
    gp = bp + dp + hp;

    cout << "\n Gross Pay: "
         << gp;
    cout << "\n Basic Salary: "
         << bp;
    cout << "\n Dearness pay: "
         << dp;
    cout << "\n House Pay: "
         << hp;

    return 0;
}