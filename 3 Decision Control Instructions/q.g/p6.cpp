#include <iostream>
using namespace std;
int main()
{

    int s1, s2, s3;

    cout << "Enter three Sides of Triangle : " << endl;
    cin >> s1 >> s2 >> s3;

    if (s1 == s2 && s2 == s3 && s1 == s3)
    {

        cout << "This is Equilateral triangle";
    }

    if (s1 == s2 && s2 != s3 || s1 == s3 && s2 != s3 || s3 == s2 && s2 != s1)
    {

        cout << "This is isoscles Triangle";
    }

    if (s1 != s2 && s2 != s3)
    {
        cout << "This is scalene Triangle";
    }

    if ((s1 * s1) == (s2 * s2) + (s3 * s3) || (s2 * s2) == (s1 * s1) + (s3 * s3) || (s3 * s3) == (s1 * s1) + (s2 * s2)) {
            cout << "This is Right Angled Triangle";
        }

        return 0;
}