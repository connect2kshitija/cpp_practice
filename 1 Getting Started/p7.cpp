#include <iostream>
using namespace std;
int main()
{
    int cp, sp, profit;

    cout << "Enter Total Selling Price for 15 items:";
    cin >> sp;

    cout << "Enter Total Profit Price for 15 items:";
    cin >> profit;

    cp = (sp - profit) / 15;

    cout << "\nTotal Selling Price : "
         << sp;

    cout << "\nTotal Profit Price : "
         << profit;

    cout << "\nCost Price per item : "
         << cp;

    return 0;
}