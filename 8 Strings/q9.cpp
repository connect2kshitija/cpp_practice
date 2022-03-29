#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){

    char a[3][50];
    int i,j ,k,len;

    cout<<"Enter Three Strings here :"<<endl;
    for(i=0;i<3;i++){

        cout<<"\n Enter String ["<<i+1<<"] String :: ";
        gets(a[i]);
    }

    cout<<"String of Array is : "<<endl;
    for(i=0;i,3;i++){
        cout<<"\n"<<a[i];
    }
    for(i=0;i<2;i++){
        cout<<"\n";
        len=strlen(a[i]);
        for(j=0,k=len-1;k>=0;k--,j++){
            cout<<a[j][k];
        }
        cout<<"\n";
    }
    return 0;
}