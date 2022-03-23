#include<iostream>
using namespace std;
int main(){

    int ang1,ang2,ang3;
    cout<<"Enter Three angles of triangle"<<endl;
    cin>>ang1>>ang2>>ang3;

    if(ang1+ang2+ang3==180){
        cout<<"Triangle is valid";
    }
    else{
        cout<<"Triangle is invalid";
    }
}