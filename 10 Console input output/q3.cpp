#include <iostream>
using namespace std;
void xputs(char *);
void xgets(char *);
int main()
{
    char sent[100];
    xgets ( "Enter Sentence Here: ") ;
    xgets(sent);
    xgets ("\n\n");
    xputs(sent);
    return 0;
}
void xputs(char *s)
{
    while (*s)
    {
        putchar(*s);
        s++;
    }
}
void xgets(char *s)
{
    int i;
    char ch;

    for (i = 0; i < 100; i++)
    {
        ch = getchar();
        if (ch == '\r')
        {
            *s = '\0';
            break;
        }
        if (ch == '\b')
        {
            cout << "\b";
            i--;
            s--;
        }
        else
        {
            *s = ch;
            s++;
        }
    }
}