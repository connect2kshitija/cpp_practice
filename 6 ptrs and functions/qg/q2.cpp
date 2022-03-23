#include <iostream>
using namespace std;
void fun(int *sum, int *per)
{
    int s1, s2, s3;
    cout << "Enter Marks of Student Obtained in Three Subjects : " << endl;
    cin >> s1 >> s2 >> s3;

    *sum = (s1 + s2 + s3) / 3;
    *per = (s1 + s2 + s3) / 3;
}
int main()
{
    int sum, per;
    fun(&sum, &per);
    cout << "average = " << sum << "\npercentage = " << per;
    return 0;
}