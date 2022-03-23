#include <iostream>
using namespace std;
int main()
{

    int n, num, flag, s, b, range;

    flag = 0;

    cout << "Enter how many numbers are there in set : ";
    cin >> n;
    while (n > 0)
    {

        cout << "Enter number in list : ";
        cin >> num;

        if (flag == 0)
        {
            s = b = num;
            flag = 1;
        }
        else
        {
            if (num > b)
            {
                b = num;
            }
            if (num < s)
            {
                s = num;
            }
        }

        n--;
    }

    if (s < 0)
    {
        range = s + b;
    }
    else
    {
        range = b - s;
    }
    if (range < 0)
    {
        range = range * -1;
    }
    cout << "The range of given set of Numbers : " << range << endl;
    return 0;
}