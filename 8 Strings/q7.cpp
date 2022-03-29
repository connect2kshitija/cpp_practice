#include<iostream>
using namespace std;
#include<string.h>
int main(){

    char *str[]={
       "We will teach you how to...",
       "Move a Mountain ",
       "Level a building",
       "Erase the past",
       "Make a Million",
       "... all through cpp ..."
    };
    char str1[20],str2[20];
    int i;
    char *p,*t,*news;

    cout<<"Enter String To Change : "<<endl;
    cin>>str1;

    cout<<"Enter New String :"<<endl;
    cin>>str2;

    if(strlen(str2)>strlen(str1)){

        cout<<"Enter The String With characters Only : "<<strlen(str1)<<endl;
        exit(0);
    }

    for(i=0;i<6;i++){

        p=strstr(str[i],str1);

        if(p){

            p=p+strlen(str1);
            strcpy(news,t);
            strcpy(p,str2);
            strcat(p,t);
            break;
        }

    }
    
    cout<<"The new String is : "<<endl;
    for(i=0;i<6;i++){
        cout<<"\n"<<str[i];
    }
    return 0;
}