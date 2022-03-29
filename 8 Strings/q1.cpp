#include<iostream>
#include<string.h>
using namespace std;
int main(){
    
    char *str1="United";
    char *str2="Front";
    char *str3;

    str3=strcat(str1,str2);
    cout<<str3;
    
    return 0; 
}