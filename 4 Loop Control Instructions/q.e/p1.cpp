#include <iostream>
using namespace std;
int main()
{

    int i, n = 1;
    cout << "\n Prime Numbers between 1 to 300 : " << endl;

    while (n <= 300)
    {
        i=2;
        
        while (i < n)
        {

            if (n % i == 0)
            {

                break;
            }
            else
            {
                i++;
            }
        }
            if (i == n)
            {
                cout << "\t " << n << endl;
                n++;
            }
        
    }
    return 0;
}