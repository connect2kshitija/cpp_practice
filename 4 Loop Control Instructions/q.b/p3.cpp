#include <iostream>
using namespace std;
int main()
{

    int num1, num2, i = 1;
    long int power =1 ;

    cout << "Enter 1st number : ";
    cin >> num1;

    cout << "Enter 2nd number : ";
    cin >> num2;

    while (i <= num2)
    {

        power = power * num1;
        i++;
    }
    cout << "Power is : " << power << endl;
    return 0;
}