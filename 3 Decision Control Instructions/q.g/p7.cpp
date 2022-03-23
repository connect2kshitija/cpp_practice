#include <iostream>
using namespace std;
int main()
{

    float hr;
    cout << "Enter Time Required By Worker To complete Job : ";
    cin >> hr;

    if (hr >= 2 && hr <= 3)
    {
        cout << "Worker is Highly Efficient";
    }

    if (hr >= 3 && hr <= 4)
    {
        cout << "Worker is ordered to improve his work";
    }

    if (hr >= 4 && hr <= 5)
    {
        cout << "Worker is given training to improve his work";
    }

    if (hr > 5)
    {
        cout << "Terminate Worker";
    }
    return 0;
}