#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    char ch;
    ch=getchar();
    if(islower(ch)){
        putchar(toupper(ch));
    }
    else{
        putchar(tolower(ch));
    }
}