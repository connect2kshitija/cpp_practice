#include <iostream>
using namespace std;
int binary(int n)
{

    int r;

    r = n % 2;
    n = n / 2;

    if (n == 0)
    {
        cout << "Binary equivalent is : " << r;
        return r;
    }
    else
    {
        binary(n);
    }
    cout << r << endl;
}
int main()
{
    int num;
    cout << "Enter nmumber Here : " << endl;
    cin >> num;
    binary(num);
    return 0;
}