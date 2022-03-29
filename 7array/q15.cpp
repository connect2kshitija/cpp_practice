#include<iostream>
#include<math.h>
using namespace std;
int main(){

  float a[6],b[6],angle[6],area[6],largest=0.0;
  int i,plot;

  for(i=0;i<=5;i++){

      cout<<"Enter the Values of Following Data :";
      cout<<i+1;
      cin>>a[i];
      cout<<i+1;
      cin>>b[i];
      cout<<i+1;
      cin>>angle[i];

      area[i]=0.5*a[i]*b[i]*sin(angle[i]);

      if(area[i]>largest){
          largest=area[i];
          plot=i;
      }
  }
  cout<<"Entered plot dimension and respective Area is : "<<endl;
  cout<<"Plot No.\t a \t b \t Angle \t Area";

  for(i=0;i<=5;i++){

         cout<<"\n \t\t "<<i+1<<a[i]<<b[i]<<angle[i]<<area[i];
  }

  cout<<"Largest Triangular Area having values of a,b and angle as : "<<largest;
  cout<<"a="<<a[plot]<<b[plot]<<angle[plot];

  return 0;
}