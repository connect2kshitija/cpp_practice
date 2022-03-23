#include <iostream>
using namespace std;
int main()
{

    int sp, cp, profit, loss;

    cout << "Enter Cost Price For an item : ";
    cin >> cp;

    cout << "Enter Selling Price for an item : ";
    cin >> sp;

    if (sp >= cp)
    {
        profit = sp - cp;
        cout << "You got profit of : " << profit;
    }
    else if(cp >= sp)
    {
        loss = cp - sp;
        cout << "You got Loss of : " << loss;
    }
    return 0;
}