#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int s1, s2, s3, area, sp;

    cout << "Enter 1st sides of triangle : ";
    cin >> s1;

    cout << "\nEnter 2nd sides of triangle : ";
    cin >> s2;

    cout << "\nEnter 3rd sides of triangle : ";
    cin >> s3;

    sp = (s1 + s2 + s3) / 2;
    area = sqrt(sp * (sp - s1) * (sp - s2) * (sp - s3));

    cout << "\nArea of triangle = "
         << area;

    return 0;
}