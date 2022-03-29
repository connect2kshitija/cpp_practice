#include<iostream>
#include<string.h>
using namespace std;
int main(){


   char str[6];
   int num=0,i;

   cout<<"Enter String Consist of Number : "<<endl;
   cin>>str;
   
   for(i=0;str[i]!='\0';i++){

       if(str[i]>=48 && str[i]<=57){

           num=num*10+(str[i]-48);
       }
       else{
           cout<<"string is not valid"<<endl;
           return 1;
       }
   }
   cout<<"The Number is :"<<num;
   return 0;

}