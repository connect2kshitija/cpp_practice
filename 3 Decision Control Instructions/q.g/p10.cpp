#include <iostream>
using namespace std;
int main()
{

    float r, g, bu, white;
    float c, m, y, b;
    float max;

    cout << "Enter red ,green and blue values(0 to 255) : "<<endl;
    cin >> r >> g >> b;

    if (r == 0 && g == 0 && bu == 0)
    {
        c = m = y = 0;
        b = 1;
    }
    else
    {
        r = r / 255;
        g = g / 255;
        bu = bu / 255;

        max = r;
        if (g > max)
            max = g;
        if (bu > max)
            max = bu;

        white = max;

        c = (white - r) / white;
        m = (white - g) / white;
        y = (white - bu) / white;
        b = 1 - white;
    }

    cout << "CMYK = " << c << ", " << m << ", " << y << ", " << b << endl;
    return 0;
}