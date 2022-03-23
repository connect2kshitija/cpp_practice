#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int x1, x2, x3, y1, y2, y3, s1, s2, s3;

    cout << "Enter the values for x1 and y1 : " << endl;
    cin >> x1 >> y1;

    cout << "Enter the values for x2 and y2 : " << endl;
    cin >> x2 >> y2;

    cout << "Enter the values for x3 and y3 : " << endl;
    cin >> x3 >> y3;

    s1 = abs(x2 - x1) / abs(y2 - y1);
    s2 = abs(x3 - x1) / abs(y3 - y1);
    s3 = abs(x3 - x2) / abs(y3 - y2);

    if ((s1 == s2)  && (s1 == s3))
    {

        cout << "Points are collinear";
    }
    else
    {
        cout << "Points are not collinear";
    }

    return 0;
}