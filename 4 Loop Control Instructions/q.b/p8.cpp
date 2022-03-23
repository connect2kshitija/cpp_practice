#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int num1, num2, oct, rem, p;
    cout << "Enter Number Here :" << endl;
    cin >> num1;
    num2 = num1;
    p = oct = 0;
    while (num1 > 0)
    {

        rem = num1 % 8;
        num1 = num1 / 8;
        oct = oct + rem * pow(10, p);
    }
    cout << "The Number and it's octal is equal to : \n num = " << num2 << "  octal = " << oct << endl;
    return 0;
}