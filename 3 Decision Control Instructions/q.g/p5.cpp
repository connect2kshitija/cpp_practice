#include <iostream>
using namespace std;
int main()
{

    int s1, s2, s3, largeside, sum;

    cout << "Enter sides of triangle : " << endl;
    cin >> s1 >> s2 >> s3;

    if (s1 > s2)
    {
        if (s1 > s3)
        {
            sum = s2 + s3;
            largeside = s1;
        }
        else
        {
            sum = s2 + s1;
            largeside = s3;
        }
    }
    else
    {
        if (s2 > s3)
        {
            sum = s1 + s3;
            largeside = s2;
        }
        else
        {
            sum = s1 + s2;
            largeside = s3;
        }
    }
    if (sum > largeside)
    {
        cout << "Triangle is valid";
    }
    else
    {
        cout << "Triangle is invalid";
    }
    return 0;
}