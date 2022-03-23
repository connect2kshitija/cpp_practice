#include<iostream>
using namespace std;
int main(){

    int wt;

    cout<<"Enter weight of boxer Here : ";
    cin>>wt;

    if(wt<115){

        cout<<"Flyweight";

    }
    
    if(wt>=115 && wt<=121){

        cout<<"Bantamweight";
    }

    if(wt>=122 && wt<=153){

        cout<<"Featherweight";

    }
    
    if(wt<=154 && wt<=189){

        cout<<"Middleweight";

    }
     if(wt>=190){

         cout<<"Heavyweight";

    }
    return 0;
}