#include <iostream>
using namespace std;
int main()
{

    int p, n, z, num;
    char ans = 'y';

    p = n = z = 0;

    while (ans == 'Y' || ans == 'y')
    {

        cout << "Enter Number : " << endl;
        cin >> num;

        if (num == 0)
            z++;
        if (num > 0)
            p++;
        if (num < 0)
            n++;

        cout << "You Want to continue ?" << endl;
        cin >> ans;
    }

    cout << "You Entered positive numbers : " << p << endl;
    cout << "You Entered negative numbers : " << n << endl;
    cout << "You Entered zeros : " << z << endl;

    return 0;
}