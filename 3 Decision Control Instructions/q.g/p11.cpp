#include <iostream>
using namespace std;
int main()
{

    int d, m;
    
    cout << "Enter date And month of birth : " << endl;
    cin >> d >> m;

    if (((d >= 22 && d <= 31) && m == 12) || ((d >= 1 && d <= 19) && m == 1))
    {

        cout << "Capricorn";
    }
    if (((d >= 20 && d <= 31) && m == 1) || ((d >= 1 && d <= 17) && m == 2))
    {

        cout << "Aquarius";
    }
    if (((d >= 18 && d <= 28) && m == 2) || ((d >= 1 && d <= 19) && m == 3))
    {

        cout << "Pisces";
    }
    if (((d >= 20 && d <= 31) && m == 3) || ((d >= 1 && d <= 19) && m == 4))
    {

        cout << "Aries";
    }
    if (((d >= 20 && d <= 30) && m == 4) || ((d >= 1 && d <= 20) && m == 5))
    {

        cout << "Taurus";
    }
    if (((d >= 21 && d <= 31) && m == 5) || ((d >= 1 && d <= 20) && m == 6))
    {

        cout << "Gemini";
    }
    if (((d >= 21 && d <= 30) && m == 6) || ((d >= 1 && d <= 22) && m == 7))
    {

        cout << "Cancer";
    }
    if (((d >= 23 && d <= 31) && m == 7) || ((d >= 1 && d <= 22) && m == 8))
    {

        cout << "Leo";
    }
    if (((d >= 23 && d <= 31) && m == 8) || ((d >= 1 && d <= 22) && m == 9))
    {

        cout << "Vigro";
    }
    if (((d >= 23 && d <= 30) && m == 9) || ((d >= 1 && d <= 22) && m == 10))
    {

        cout << "Libra";
    }
    if (((d >= 23 && d <= 31) && m == 10) || ((d >= 1 && d <= 21) && m == 11))
    {

        cout << "Scorpio";
    }
    if (((d >= 22 && d <= 30) && m == 11) || ((d >= 1 && d <= 21) && m == 12))
    {

        cout << "Sagittarius";
    }

    return 0;
}