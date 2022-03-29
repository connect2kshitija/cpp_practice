#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    struct hurricane
    {
        int lowspeed;
        int highspeed;
        char category[10];
    };
    struct hurricane h[] = {
        74, 95, "I",
        96, 110, "II",
        111, 130, "III",
        131, 155, "IV",
        155, 200, "V"};
    int ws, i;

    cout << "\nEnter Wind Speed: ";
    cin >> ws;
    for (i = 0; i <= 4; i++)
    {

        if (h[i].lowspeed <= ws && ws <= h[i].highspeed)
        {
            cout << "Category of hurricane is : " << h[i].category;
        }
    }
    return 0;
}
