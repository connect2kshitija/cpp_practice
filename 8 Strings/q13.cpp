#include <iostream>
using namespace std;
int main()
{
    char str[80], str1[80];
    char *s, *p;
    cout << "Enter The Sentence not more than 80 charecters:" << endl;
    gets(str);
    s = str;
    p = str1;
    while (*s)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            s++;
        }
        else if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
        {
            s++;
        }
        else
        {
            *p++ = *s++;
        }
    }
    *p = '\0';
    cout << "Sentences after Removing all vowels :"<<endl;
    puts(str1);
    return 0;
}