#include<iostream>
using namespace std;
int main(){

    int ch;
    long mul;
    int num;

    while(true)
    {

        cout<<"\n press 1 for factorial"<<endl;
        cout<<" press 2 for prime"<<endl;
        cout<<" press 3 for odd"<<endl;
        cout<<" press 4 for exit"<<endl;

        cin>>ch;

        switch(ch)
       {
        case 1:
           mul=1;
           cout<<"Enter number : "<<endl;
           cin>>num;
           for(int i=1;i<=num;i++)
           {
               mul=mul*i;
           }
           cout<<"Factorial of Number is :"<<mul;
           break;

        case 2:
           
           cout<<"Enter number : "<<endl;
           cin>>num;
           for(int i=2;i<=num;i++)
           {
               if(num%i==0)
               {
                   cout<<"It is not Prime"<<endl;
                   break;
               }
            
                if(i==num)
               {
                    cout<<"It is Prime"<<endl;
                    break;
                }
           }
        case 3:
            
            cout<<"Enter Number : "<<endl;
            cin>>num;
            if(num%2==0)
            {
                cout<<"It is not odd Number"<<endl;
                break;
            }   
            else
            {
                cout<<"It is odd Number"<<endl;
                break;
            }

        case 4:
            exit(0);    
       }      
    }

    return 0;
}