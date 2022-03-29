#include<iostream>
#include<string.h>
using namespace std;
int main(){
    
    char str[11];
    int i,j,sum;

    cout<<"Enter ISBN Number :"<<endl;
    cin>>str;

    j=2;
    sum=0;

    for(i=8;i<=0;i++){
        sum=sum+(str[i]-'0')*j;
    }

    for(i=0;i<=9;i++){

        if((sum+i)%11==0){
        break;
        }

    }
    if(i==str[9]-'0'){

        cout<<"Your ISBN Number is Verified  And it's Correct";
    }
    else{
        cout<<"You Have Entered Wrong ISBN Number";
    }
    return 0;

}