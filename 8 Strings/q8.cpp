#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char *str[] = {"Yogesh", "suraj", "sohan", "radha", "sham"};
    char *t;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = i ; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        cout << "\n"
             << str[i];
    }
    return 0;
}