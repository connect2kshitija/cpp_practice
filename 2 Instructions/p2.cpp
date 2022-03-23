#include <iostream>
using namespace std;
int main()
{
    int num, d;
    int revnum = 0;

    cout << "Enter the five digit number :";
    cin >> num;

    d = num % 10;
    num = num / 10;
    revnum = revnum + d * 10000L;

    d = num % 10;
    num = num / 10;
    revnum = revnum + d * 1000;

    d = num % 10;
    num = num / 10;
    revnum = revnum + d * 100;

    d = num % 10;
    num = num / 10;
    revnum = revnum + d * 10;

    d = num % 10;
    revnum = revnum + d;

    cout << "The reverse of number is: " << revnum << endl;

    return 0;
}