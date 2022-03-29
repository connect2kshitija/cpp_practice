#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n=11,i,j;
    float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,54.14,49.12,40.71,55.15};
    float y[11]={102.43,100.93,97.43,98.32,100.07,97.08,91.59,94.85,94.65};
    float r;
    float sx=0.0,sxy=0.0,sy=0.0,sxs=0.0,sys=0.0;
    float r1,r2;
    for(int i=0;i<=10;i++){
        sx=sx+x[i];
        sxy=sxy+x[i]*y[i];
        sy=sy+y[i];
        sxs=sxs+x[i]*x[i];
        sys=sys+y[i]*y[i];
    }
    r1=sxy-sx*sy;
    r2=sqrt((n*sxs-sx*sx)*(n*sys-sy*sy));
    r=r1/r2;
    cout<<"Numerator : "<<r1<<endl;
    cout<<"Denominator : "<<r2<<endl;
    cout<<"Corelation coeffient : "<<r<<endl;
    return 0;
}