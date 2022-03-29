#include <iostream>
using namespace std;
int main()
{
    char str[80], str1[80];
    char *p, *s, *q;
    int i;

    cout << "Enter Your Sentence Here:" << endl;
    gets(str);

    s = str;
    p = str1;

    while (*s)
    {
        q = s;
        if (*s == 't' || *s == 'T')
        {
            s++;
            if (*s == 'h' || *s == 'h')
            {
                s++;

                if (*s == 'e' || *s == 'E')
                {
                   s++ ;
                }

                else
                {

                    for (i = 0; i <= 2; i++)
                    {
                        *p++ = *q++;
                    }
                }
            }
            else
            {
                *p++ = *q++;
                s--;
            }
        }
        else
        {
            *p++ = *s;
            s++;
        }
    }

    *p = '\0';
    cout << "Sentence After Removing all 'The' will Be :" << endl;
    puts(str1);
    return 0;
}