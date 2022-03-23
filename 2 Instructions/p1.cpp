#include <iostream>
using namespace std;
int main()
{

    int num, sum, n1, n2, n3, n4, n5, n;

    cout << "Enter five digit number : ";
    cin >> num;

    sum = 0;

    n1 = num % 10;
    n = num / 10;
    sum = sum + n1;

    n2 = n % 10;
    n = n / 10;
    sum = sum + n2;

    n3 = n % 10;
    n = n / 10;
    sum = sum + n3;

    n4 = n % 10;
    n = n / 10;
    sum = sum + n4;

    n5 = n % 10;
    n = n / 10;
    sum = sum + n5;

    cout << "Sum Of Digits Is = " << n1 << " + " << n2 << " + " << n3 << " + " << n4 << " + " << n5 << " = " << sum << endl;

    return 0;
}