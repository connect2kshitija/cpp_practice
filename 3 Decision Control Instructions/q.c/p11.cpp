#include <iostream>
using namespace std;
int main()
{
    int x, y, r;
    int dist, d;

    cout << "Enter x :";
    cin >> x;

    cout << "Enter y :";
    cin >> y;

    cout << "Enter Radius of circle : ";
    cin >> r;

    dist = x * x + y * y;
    d = r * r;

    if (dist == d)
    {
        cout << "Points are on circle";
    }
    else
    {

        if (dist > d)
        {
            cout << "Points are outside circle";
        }
        else
        {
            cout << "Points are inside circle";
        }
    }

    return 0;
}