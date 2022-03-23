#include<iostream>
using namespace std;
void fact(int n){
    static int i=2;
    if(i<n)
    {
        if(n%i==0)
        {
            cout<<i<<" , "<<endl;
            n=n/i;
        }
        else
        {
        i++;
        }
        fact(n);
    }
}
int main(){

    int num;
    cout<<"Enter a Number : "<<endl;
    cin>>num;
    cout<<"Prime Factors are : "<<endl;
    fact(num);
    return 0;

}