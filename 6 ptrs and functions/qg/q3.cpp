#include <iostream>
using namespace std;
int sum(int num)
{

    int sum = 0, remainder;

    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    return sum;
}
int rsum(int num)
{

    int sum =0 ;
    int remainder;
    if (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder + rsum(num / 10);
    }
    return sum;
}
int main()
{

    int s,rs;
    int num;
    cout << "Enter Five Digit Number Here :" << endl;
    cin >> num;

    s=sum(num);
    cout << "Sum of Digits of given Number without recursion : " << s << endl;

    rs=rsum(num);
    cout << "Sum of Digits of given Number using recusion : " << rs << endl;

    return 0;
}