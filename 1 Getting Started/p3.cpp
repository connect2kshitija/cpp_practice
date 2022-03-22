#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3, s4, s5, am;
    float pm;

    cout << "Enter Marks obtained in 5 subjects : ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    am = s1 + s2 + s3 + s4 + s5;

    cout << "Aggregate Marks Obtained By Student : "
         << am;

    pm = am / 5;

    cout << "\nPercentage Marks Obtained By Student : "
         << pm;

    return 0;
}