#include <iostream>
using namespace std;
int gsum(int n)
{
    int sum = 0;
    if (n == 25)
    {
        return sum;
    }
    sum = n + gsum(++n);
    return sum;
}
int main()
{

    int s;

    s = gsum(0);

    cout << "Sum of iNatural numbers from 1 to 25 is : " << s << endl;
    return 0;
}