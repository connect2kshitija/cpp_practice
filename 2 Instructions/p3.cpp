#include <iostream>
using namespace std;
int main()
{
    int num, n1, n2, n, sum = 0;
    
    cout << "Enter 4 digit number:";
    
    cin >> num;
    
    n1 = num / 1000;
    
    n2 = num % 10;
    
    sum = n1 + n2;
    
    cout << "Sum of 1st and last digit = " << n1 << " + " << n2 << " = " << sum << endl;
    
    return 0;
}