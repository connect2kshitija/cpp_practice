#include <iostream>
using namespace std;
int main()
{
    int c, d;

    cout << "Enter Value of C : ";
    cin >> c ;

    cout << "Enter Value of D : ";
    cin >> d ;

    int temp;
    temp = c;
    c = d;
    d = temp;

    cout << "Value of C Exchanged : "
         << c;
    cout << "\nValue of D Exchanged : "
         << d;

    return 0;
}