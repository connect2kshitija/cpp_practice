#include<iostream>
#include<string.h>
using namespace std;
int main(){
    struct part{
        char partname[50];
        int partnumber;
    };
    struct part p,*ptrp;
    ptrp=&p;
    strcpy(p.partname,"CrankShaft");
    p.partnumber=102133;

    cout<<p.partname<<p.partnumber<<endl;
    cout<<(*ptrp).partname<<(*ptrp).partnumber<<endl;
    cout<<ptrp->partname<<ptrp->partnumber<<endl;

    return 0;
}