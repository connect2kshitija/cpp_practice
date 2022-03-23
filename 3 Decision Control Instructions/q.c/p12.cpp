#include <iostream>
using namespace std;
int main()
{

    int x, y;

    cout << "Enter value of x : ";
    cin >> x;
    cout << "Enter value of y : ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "Points are at origin";
    }
    else if (x == 0 && y != 0)
    {
        cout << "Points lies on y axis";
    }
    else if (x != 0 && y == 0)
    {
        cout << "Points lies on x axis";
    }
    else
    {
        cout << "Point neither lies on x,y axis nor at origin";
    }

    return 0;
}
