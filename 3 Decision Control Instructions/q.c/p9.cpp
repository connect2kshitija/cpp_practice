#include <iostream>
using namespace std;
int main()
{

    int l, b, a, p;

    cout << "Enter Length of Ractangle : ";
    cin >> l;

    cout << "Enter Breadth of Ractangle : ";
    cin >> b;

    a = l * b;
    p = 2 * (l + b);

    if (a > p)
    {
        cout << "Area is grater than Perimeter : " << a << " > " << p << endl;
    }
    else
    {
        cout << "perimeter is greater than Area : " << a << "<" << p << endl;
    }
    return 0;
}