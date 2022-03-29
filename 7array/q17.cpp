#include<iostream>
#include<math.h>
using namespace std ;
int main(){

    int n=10,i;
    float x[10]={};
    float y[10]={};
    float sx=0.0,sxs=0.0,sxy=0.0,sy=0.0;
    float r1,r2,mx=0.0,my=0.0,yy;
    float a,b;

    for(i=0;i<=19;i++){
        sx=sx+x[i];
        sxs=sxs+x[i]*x[i];
        sy=sy+y[i];
        sxy=sxy+x[i]*y[i];
    }
    
    cout<<"X ="<<sx;
    cout<<"Y ="<<sy;
    cout<<"XY ="<<sxy;
    cout<<"X*X ="<<sxs;

    r1=n*sxy-sx*sy;
    r2=n*sxs-sx*sx;

    b= r1/r2;

    mx=sx/n;
    my=sy/n;
    a=my-b*mx;

    cout<<"Value of a : "<<a;
    cout<<"Equation of line : \n y="<<a<<"+"<<b<<"*x";

    return 0;
}