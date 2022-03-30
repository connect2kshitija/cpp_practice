#include<iostream>
float getfloat();
using namespace std;
int main(){
    float floatresult=0.0f;
    
    floatresult =getfloat();
    cout<<"After converting string to float,result is : ";
    cout<<"\n"<<floatresult;
    return 0;
}
float getfloat(){

    char str[]="1234.56";
    float temp=0.0f,result=0.0f;
    int i,j,decimal;
    for(i=0;str[i]!='.';i++){
        result =(result*10)+str[i]-'0';
    }
    decimal=1;
    for(j=i+1;str[j]!='\0';j++){
        temp=str[j]-'0';
        decimal=decimal*10;
        temp=temp/decimal;
        result=result+temp;
    }
    return result;
}