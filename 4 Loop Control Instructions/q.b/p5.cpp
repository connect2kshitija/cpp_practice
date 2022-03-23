#include <iostream>
using namespace std;
int main()
{

    int i = 1, a, b, c;
    cout << "Armstrong Numbers between 1 to 500 is : \n";

    while (i <= 500)
    {

        a = i % 10;
        b = i % 100;
        b = (b - a) / 10;
        c = i / 100;
        if ((a * a * a) + (b * b * b) + (c * c * c) == i)
        {
            cout << "\n"
                 << i;
        }
        i++;
    }

    return 0;
}