#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[60];
    char lastbutoneterm[50]="A";
    char lastterm[50]="B";
    int i;

    for(i=1;i<=5;i++){

        strcpy(str,lastterm);
        strcat(str,lastbutoneterm);
        cout<<str;
        strcpy(lastbutoneterm,lastterm);
        strcpy(lastterm,str);
    }
    return 0;
}