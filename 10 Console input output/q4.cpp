#include<iostream>
using namespace std;
int getint();
int main(){
    int a;
    cout<<"Enter Numeric String ...";
    a=getint();
    cout<<"You Entered : "<<a;
}
int getint(){
    char str[6];
    int i,j,k,val;

    i=0;

    while(i<=5){
        str[i]=getchar();
        if(str[i]=='\r'){
            str[i]='\0';
            break;
        }
        if(str[i]=='\b'){
            i--;
            cout<<"\b";
        }
        else{
            i++;
        }
    }
    val=0;
    k=1;
    for(j=i-1;j>=0;j--){
        val=val+(str[j]-48)*k;
        k=k*10;
    }
    return 0;
}