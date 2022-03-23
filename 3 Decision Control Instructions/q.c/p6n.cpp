#include <iostream>
using namespace std;
int main()
{

    int a, r, s, young;
    
    cout << "Age of Ajay : ";
    cin >> a;
    
    cout << "Age of Ramesh : ";
    cin >> r;
    
    cout << "Age of Suresh : ";
    cin >> s;
    
    if (a < r)
    {

        if (a < s)
        {
            young = a;
        }
        else
        {
            young = s;
        }
    }
    else
    {

        if (r < s)
        {
            young = r;
        }
        else
        {
            young = s;
        }
        return 0;
    }