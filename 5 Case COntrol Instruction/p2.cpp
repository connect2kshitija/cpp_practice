#include<iostream>
using namespace std;
int main(){

    int num,ch;
    
    cout<<"Enter the class and number of subjects failed"<<endl;
    cin>>ch>>num;

    while(true)
    {
        
        switch(ch)
        {
            case 1:
            if(num<=3)
            {
                cout<<"5 Grace marks are added : "<<num*5<<endl;
                break;
            }
            else
                cout<<"No Grace Marks "<<endl;
                break;

            case 2:
            if(num<=2)
            {
                cout<<"4 Grace Marks are added :"<<num*4<<endl;
                break;
            }    
            else
                cout<<"No Grace Marks Will be added"<<endl;
                break;

            case 3:
            if(num<=1) 
            {
                cout<<"Grace of 5 Marks"<<endl;
                break;
            }    
            else
                cout<<"No Grace Marks"<<endl;
                break;

            default:
                cout<<"Wrong Class Entered"<<endl;    

        }
    }

    return 0;
}