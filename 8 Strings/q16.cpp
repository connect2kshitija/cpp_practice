#include <iostream>
using namespace std;
int main()
{

    char str[80];
    int count = 0;
    char *s = str;

    cout << "Enter The String :" << endl;
    gets(str);
    while (*s)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            s++;
            if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            {
                count++;
            }
            s++;
        }
    }

    cout<<"Number of two sucessive vowel are :"<<count<<endl;
    return 0;
}