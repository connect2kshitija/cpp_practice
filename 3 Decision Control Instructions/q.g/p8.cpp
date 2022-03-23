#include <iostream>
using namespace std;
int main()
{

    int o, stock = 100;
    char credit;

    cout << "Enter Quantity you Require :";
    cin >> o;

    cout << "Enter Credit is ok or not Here : ";
    cin >> credit;

    if (o <= stock)
    {

        if (credit == 'o')
        {

            cout << "Order Can be supplied "<<endl;
            stock = stock - o;
        }
        else
        {
            cout << "Order can not be supplied send inmintation"<<endl;
        }
    }
    else
    {   
        if(credit == 'o'){
            cout<<"Supply availabel items remaining send later"<<endl;
        }
        else{
        cout << "balance will be Shipped later"<<endl;
        }
    }
    return 0;
}