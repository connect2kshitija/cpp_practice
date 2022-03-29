#include<iostream>
#include<string.h>
using namespace std;
int main(){

    struct player{
        char name[20];
        int rank[3];
        int tot;
    };
    struct player p[]={
        "Rahul",{0},0,
        "Raj",{0},0,
        "Rohan",{0},0,
        "Sachin",{0},0,
        "Sam",{0},0,
    };

    char winner[20];
    int i,judge,big;

    for(judge=0;judge<3;judge++){

        cout<<"Enter Rank Here :";
        for(i=0;i<5;i++){
            cout<<p[i].name;
            cin>>p[i].rank[judge];
            p[i].tot=+p[i].rank[judge];
        }
    }
    big=p[0].tot;
    for(i=1;i<5;i++){
        if(p[i].tot>big){
            big=p[i].tot;
            strcpy(winner,p[i].name);
        }
    }
    cout<<"\nwinner= "<<winner<<"\nScore= "<<big;
    return 0;
}