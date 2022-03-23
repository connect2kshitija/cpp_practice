#include <iostream>
using namespace std;
int main()
{

    int year=1;
    float p = 6000, sal = 2000, ypr = 1000;
    float v1, v2, interest;

    while (true)
    {

        v1 = sal + ypr * year;
        interest = p * 0.09f * year;
        v2 = p + interest;

        cout << "year = " << year << "   Value Point 1 = " << v1 << "   Value Point 2 = " << v2 << endl;

        if (v1 > v2)
        {
            break;
        }

        year++;
    }

    cout << "Minimum Life of Machine is : " << year - 1 << endl;

    return 0;
}