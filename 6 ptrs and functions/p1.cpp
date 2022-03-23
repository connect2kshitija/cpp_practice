#include <iostream>
using namespace std;
long fact(int);
int main()
{

    long facto;
    int num;

    cout << "Enter Number : ";
    cin >> num;

    facto=fact(num);

    cout << "Factorial of Number  " << num << " is = " << facto << endl;
    

    return 0;
}
long fact(int num)
{
    long facto = 1;

    for (int i = 1; i <= num; i++)
    {
        facto = facto * i;
    }

    return(facto);
}