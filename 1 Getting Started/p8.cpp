#include <iostream>
using namespace std;
int main()
{
    int A0ht, A1ht, A2ht, A3ht, A4ht, A5ht, A6ht, A7ht, A8ht;
    int a0wd, a1wd, a2wd, a3wd, a4wd, a5wd, a6wd, a7wd, a8wd;

    A0ht = 1189;
    a0wd = 841;
    cout << "\n Size of A0 paper height = " << A0ht << " and width = "
         << a0wd;

    A1ht = a0wd;
    a1wd = A0ht / 2;
    cout << "\n Size of A1 paper height = " << A1ht << " and width = "
         << a1wd;

    A2ht = a1wd;
    a2wd = A1ht / 2;
    cout << "\n Size of A2 paper height = " << A2ht << " and width = "
         << a2wd;

    A3ht = a2wd;
    a3wd = A2ht / 2;
    cout << "\n Size of A3 paper height = " << A3ht << " and width = "
         << a3wd;

    A4ht = a3wd;
    a4wd = A3ht / 2;
    cout << "\n Size of A4 paper height = " << A4ht << " and width = "
         << a4wd;

    A5ht = a4wd;
    a5wd = A4ht / 2;
    cout << "\n Size of A5 paper height = " << A5ht << " and width = "
         << a5wd;

    A6ht = a5wd;
    a6wd = A5ht / 2;
    cout << "\n Size of A6 paper height = " << A6ht << " and width = "
         << a6wd;

    A7ht = a6wd;
    a7wd = A6ht / 2;
    cout << "\n Size of A7 paper height = " << A7ht << " and width = "
         << a7wd;

    A8ht = a7wd;
    a8wd = A7ht / 2;
    cout << "\n Size of A8 paper height = " << A8ht << " and width = "
         << a8wd;
}
