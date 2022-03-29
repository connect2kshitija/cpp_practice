#include<iostream>
using namespace std;
int main(){

    int arr[25],i,n;

    cout<<"Enter array of integers :"<<endl;

    for(i=0 ; i<=24; i++){

        cin>>arr[i];
    }
    n=*arr;


    for(i=0;i<=24; i++){
       
       if(*(arr+i)<n){
           n=*(arr+i);
       }

    }

    cout<<"Smallest Number is: "<<n;
    return 0;
}