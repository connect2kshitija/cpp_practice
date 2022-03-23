#include <iostream>
using namespace std;
void Leapyear(int);
int main()
{
    int yr;

    cout << "Enter Year : ";
    cin >> yr;

    Leapyear(yr);

    return 0;
}
void Leapyear(int yr)
{
 
    if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
    {
        cout << "This is Leap Year "<<yr;
    }
    else
    {
        cout << "This is not leap year"<<yr;
    }
}