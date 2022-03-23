#include <iostream>
using namespace std;
int main()
{
    long int num, revnum = 0, a, n;

    cout << "Ener Five Digit number : ";
    cin >> n;

    num = n;

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 10000L;

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 1000;

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 100;

    a = n % 10;
    n = n / 10;
    revnum = revnum + a * 10;

    a = n % 10;
    revnum = revnum + a;

    cout << "Reverse Of Number is : " << revnum << endl;

    if (num == revnum)
    {
        cout << "Number And Reverse Number is Equal : " << num << " = " << revnum << endl;
    }
    else
    {
        cout << "Number And Reverse Number is Not Equal " << endl ;
    }
    return 0;
}