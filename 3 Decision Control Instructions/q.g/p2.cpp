#include <iostream>
using namespace std;
int main()
{

    char ch;

    cout << "Enter Character Here : ";
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "The Character is an Uppercase letter" << endl;
    }
    if (ch >= 97 && ch <= 122)
    {
        cout << "The Character is Lowercase letter" << endl;
    }
    if (ch >= 48 && ch <= 57)
    {
        cout << "The Character has value between zero to nine" << endl;
    }
    if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
    {
        cout << "The Character is special Symbol" << endl;
    }

    return 0;
}