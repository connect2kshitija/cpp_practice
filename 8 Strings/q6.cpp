#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char str[20];
    int i, mul = 1, digit, len, sum;
    cout << "Enter Credit Card Number Here : " << endl;
    cin >> str;
    len = strlen(str);
    digit = str[i] - '0';
    for (i = 15; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            mul = digit * 2;
            digit = mul < 10 ?mul:mul - 9;             
        }
        sum += digit;
        
    }

    cout << sum<<endl;

    if (sum % 10 == 0)
    {
        cout << "Number Entered is valid ";
    }
    else
    {
        cout << "Number is invalid ";
    }

    return 0;
}