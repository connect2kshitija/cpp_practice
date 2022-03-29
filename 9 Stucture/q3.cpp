#include<iostream>
using namespace std;
struct gospel{

    int num;
    char mess1[50];
    char  mess2[50];

}m1={
    2,"If you are driven by sucess",
    "make sure that it is a quality drive"
};
int main(){

    struct gospel m2,m3;
    m2=m1;
    m3=m2;
    cout<<m1.num<<"\n"<<m2.mess1<<"\n"<<m3.mess2;
    return 0;
}