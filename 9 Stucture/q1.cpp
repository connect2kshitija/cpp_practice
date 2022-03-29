#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    struct gospel
    {
        int num;
        char mess1[50];
        char mess2[50];
    } m;
    m.num=1;
    strcpy(m.mess1,"If all that you have is Hammer");
    strcpy(m.mess2,"Everything Looks like Nail");
    //Assume that structure is aloated at address 1004
    cout<<&m.num<<m.mess1<<m.mess2;
    return 0;
}