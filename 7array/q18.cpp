#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int i,x[10],y[10];
    float sum=0;

    cout<<"Enter the co-ordinates for the ppoints : ";
    for(i=-0;i<=9;i++){

        cout<<"X = ["<<i+1<<"]";
        cin>>x[i];

        cout<<"Y = ["<<i+1<<"]";
        cin>>y[i];

    }

    sum =sum+sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
    cout<<"Distance of last point from first point = "<<sum;
    return 0;
}