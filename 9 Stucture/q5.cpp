#include <iostream>
using namespace std;
struct customer
{

    int acc_no;
    char name[50];
    float bal;
};
struct customer cust[200]{};
void fun()
{
    float f, *ff = &f;
};

void display();
void set_cust_data();
void with_dep(int ano, float amt);
void withdrawl(int ano, float amt);
void deposit(int ano, float amt);
void lowbal();
void with_dep(int ano, float amt)
{
    int ch;
    cout<<"Enter 1 for Deposit or Enter 0 for Withdraw:";
    cin>>ch;
    switch(ch){
        case 1:
        deposit(ano,amt);
        break;
        case 2:
        withdrawl(ano,amt);
        break;
        default:
        cout<<"You Entered Wrong Choice!!!!!!"<<endl;
    }
}
void set_cust_data()
{
    int i;
    for (i = 0; i < 200; i++)
    {
        cout << "Enter Account Number :" << endl ;
        cin >> cust[i].acc_no;

        fflush(stdin);
        cout << "Enter Name Of Customer:" << endl;
        cin >> cust[i].name;

        fflush(stdin);
        cout << "Enter Balnce avilable in account:" << endl;
        cin >> cust[i].bal;
    }
}
void withdrawl(int ano, float amt)
{

    int i, j = 0;
    for (i = 0; i < 200; i++)
    {

        if (cust[i].acc_no == ano)
        {

            j = 1;
            if (cust[i].bal < 100)
            {
                cout << "Balance is insufficient for Withdrawal";
            }
            else if (cust[i].bal - 100 >= amt)
            {
                cust[i].bal -= amt;
            }
            else
            {
                cout << "Withdrawal Amount Should Be less than or equal to " << cust[i].bal - 100 << "Rs" << endl;
            }
        }
    }
    if (j == 0)
    {
        cout << "Wrong Account Number";
    }
}
void deposit(int ano, float amt)
{

    int i, j = 0;
    for (i = 0; i < 200; i++)
    {

        if (cust[i].acc_no == ano)
        {
            cust[i].bal += amt;
            j = 1;
        }
    }
    if (j == 0)
    {
        cout << "Wrong Account Number";
    }
}
void lowbal()
{
    int i, j = 0;
    cout<<"Name Of Customer Who Has Balance less than 100 Rs in Account";
    for (i = 0; i < 200; i++)
    {
        if (cust[i].bal < 100)
        {
            j=1;
            cout << "Customer Account Number :" << cust[i].acc_no << endl;
            cout << "Name Of Customer:" << cust[i].name << endl;
            cout << "Balnce avilable in account:" << cust[i].bal << endl;
        }
    }
    if(j==0){
        cout<<"Every Customer Has More Than Minimum Balance"<<endl;
    }
}
void display()
{
    int i;
  
    for (i = 0; i < 200; i++)
    {
        cout<<"Customer Number : "<<i+1;
        cout << "Customer Account Number :" << cust[i].acc_no << endl;
        cout << "Name Of Customer:" << cust[i].name << endl;
        cout << "Balnce avilable in account:" << cust[i].bal << endl;
    }
}
int main()
{
    int i,ano,ch;
    float amt;

    set_cust_data();

    display();

    lowbal();

    cout<<"Enter Account Number and amount to withdraw  or Deposit:"<<endl;
    cin>>ano>>amt;

    with_dep(ano,amt);

    display();
    return 0;
}