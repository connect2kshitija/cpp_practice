#include <iostream>
using namespace std;
int main()
{

    int m = 21, p, c;

    while (1)
    {

        cout << "\n \n No. of Matches Left : " << m << endl;
        cout << "Pick up 1, 2, 3 or 4 matches : ";
        cin >> p;

        if (p > 4 || p < 1)

            continue;

        m = m - p;
        cout << "No. of Matches Left : " << m << endl;

        c = 5 - p;
        cout << "Out of Which computer has picked : " << c << endl;

        m = m - c;
        if (m == 1)
        {
            cout << "No. of Matches Left : " << m << endl;
            cout << "you Lost" << endl;
            break;
        }
    }
    return 0;
}