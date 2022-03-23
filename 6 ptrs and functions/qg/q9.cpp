#include <iostream>
#include <math.h>
using namespace std;
float dist(int x1, int y1, int x2, int y2)
{
    float m, d;
    m = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    d = sqrt(m);
    return d;
}
float area()
{
    float triarea(float, float, float);
    float a, b, c, d;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float area1, area2, area3, totarea;
    float a1, b1, c1;

    cout << "\n Enter coordinates of three points :" << endl;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    cout << "\n Enter the coordinates of one or more point :" << endl;
    cin >> x4 >> y4;

    a = dist(x1, y1, x2, y2);
    b = dist(x1, y1, x3, y3);
    c = dist(x2, y2, x3, y3);
    d = triarea(a, b, c);
    a1 = dist(x1, y1, x4, y4);
    b1 = dist(x2, y2, x4, y4);
    c1 = dist(x3, y3, x4, y4);

    if ((totarea - d) <= 0.0009)
        cout << "\npoint(" << x4 << "," << y4;
    else
        cout << "\npoint(" << x4 << "," << y4;
    return d;
}
float triarea(float a, float b, float c)
{
    float s, m, x;
    s = (a + b + c) / 2;
    m = s * (s - a) * (s - b) * (s - c);
    x = sqrt(m);
    return (x);
}
int main()
{

    int x1, x2, y1, y2;
    float z, x;
    cout << "\nEnter the coordinates of two points." << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    z = dist(x1, y1, x2, y2);
    cout << "\n Distance between Two points = \n"
         << z;

    x = area();
    cout << "\nArea of The Triangle = \n"
         << x;
    return 0;
}