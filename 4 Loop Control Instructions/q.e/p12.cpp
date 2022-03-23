#include <iostream>
using namespace std;
int main()
{

    int s1, s2, s3;

    for (s1 = 1; s1 <= 30; s1++)
    {
        for (s2 = 1; s2 <= 30; s2++)
        {
            for (s3 = 1; s3 <= 30; s3++)
            {

                if (s1 * s1 + s2 * s2 == s3 * s3)
                {
                    cout << s1 << " " << s2 << " " << s3 << endl;
                }
            }
        }
    }

    return 0;
}