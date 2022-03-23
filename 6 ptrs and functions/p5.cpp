#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int num;
    int i;
    cout << "Enter Number : " << endl;
    cin >> num;

    prime(num);

    return 0;
}
void prime(int num)
{
    int i=2;
    cout << "Prime Factors of Number " << num << " are : " << endl;
    while (num != 1)
    {
       
        if (num % i == 0)
        {
            cout << i <<", ";
        }
        else
        {
            i++;
            continue;
        }
        num = num / i;
    }
}