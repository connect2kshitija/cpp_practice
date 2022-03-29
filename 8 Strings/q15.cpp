#include<iostream>
using namespace std;
int main(){
    char str[30];
    char *p;
    int  count=0,l;

    cout<<"Enter Your Name Middlename and Surname"<<endl;
    gets(str);

    p=str;

    //count number of blank spaces
    while(*p){
        if(*p==' '){
            count++;
        }
        p++;
    }

    p=str;
    cout<<"The Name Converted in initial is : "<<endl;
    while(count){
        cout<<*p;
        while(*p!=' '){
            p++;
        }
        p++;
        count--;
    }

    cout<<"\n"<<p;

    return 0;
    
}