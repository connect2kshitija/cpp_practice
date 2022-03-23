#include<iostream>
#include<math.h>
using namespace std;
int main(){

  int m,n;
  float la,r;
  float intrest,contoprin;

  cout<<"Enter Loan Amount : "<<endl;
  cin>>la;
  cout<<"Enter Loan Period : "<<endl;
  cin>>n;
  cout<<"Enter Rate of Intrest : "<<endl;
  cin>>r;

  contoprin =la/n;

  for(m=1;m<=n;m++){

      intrest = (la*1/12*r)/100;
      cout<<"Month = "<<m<<"\ncontribution towards Principal a Amount = "<<contoprin<<"\nIntrest = "<<intrest<<endl;

      la=la-contoprin; 
  }

    return 0;

}