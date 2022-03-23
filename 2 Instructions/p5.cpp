#include <iostream>
using namespace std;
int main()
{
    int num, d, newnum = 0;
    cout<<"Enter Five digit Number : ";
    cin>>num;

    d = num / 10000 + 1;
    num = num % 10000;
    newnum = newnum + d * 10000L;

    d = num / 1000 + 1;
    num = num % 1000;
    newnum = newnum + d * 1000;

    d = num / 100 + 1;
    num = num % 100;
    newnum = newnum + d * 100;

    d = num / 10 + 1;
    num = num % 10;
    newnum = newnum + d * 10;

    d = num / 1 + 1;
    num = num % 1;
    newnum = newnum + d;

    cout<<"New Number is : "<< newnum;

    return 0;
}