#include<iostream>
using namespace std;
int main(){

    int hr;


    for(hr=0;hr<=23;hr++){

        if(hr==0){
        cout<<"It's Midnight AM "<<endl;
        continue;
        }

        if(hr<12){
            cout<<"AM "<<endl;
        }

        if(hr==12){
            cout<<"It's Noon PM "<<endl;
        }
        if(hr>12){

            cout<<"PM "<<hr%12<<endl;
        }

    }

    return 0;
}