#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n5, n10, n50, n100, tn, amt;

    cout << "Enter amount : ";
    cin >> amt;

    n100 = amt / 100;
    amt = amt % 100;

    n50 = amt / 50;
    amt = amt % 50;

    n10 = amt / 10;
    amt = amt % 10;

    n5 = amt / 5;
    amt = amt % 5;

    n2 = amt / 2;
    amt = amt % 2;

    n1 = amt / 1;
    amt = amt % 1;

    tn = n100 + n50 + n10 + n5 + n2 + n1;

    cout << "Number of notes of Re.1 = " << n1 << "\nNumber of notes of Rs.2 = " << n2 << "\nNumber of notes of Rs.5 = " << n5 << "\nNumber of notes of Rs.10 = " << n10 << "\nNumber of notes of Rs.50 = " << n50 << "\nNumber of notes of Rs.100 = " << n100 << "\nTotal notes = " << tn << endl;

    return 0;
}