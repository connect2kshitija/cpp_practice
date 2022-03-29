#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char str[20], news[20];
    char *s, *t;
    int pos, n, i;

    cout << "Enter the String : ";
    cin >> str;

    cout << "Enter the position and number of characters to extract : " << news << endl;
    cin >> pos >> n;

    s = str;
    t = news;

    if (n == 0)
    {

        n = strlen(str);
    }

    s = s + pos - 1;

    for (i = 0; i < n; i++)
    {

        *t = *s;
        s++;
        t++;
    }

    *t = '\0';

    cout << "The Substring is :"<<news<<endl;
    return 0;
}