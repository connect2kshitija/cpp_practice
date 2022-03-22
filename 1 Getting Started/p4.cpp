#include <iostream>
using namespace std;
int main()
{

    float fr, cent;
    
    cout << "Enter Temprature in Farenheit : ";
    
    cin >> fr;
    
    cent = 5 * (fr - 32) / 9;
    
    cout << "Temprature in degree centigrate is : "
         << cent;
    
    return 0;
}