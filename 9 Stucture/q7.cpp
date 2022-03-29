#include<iostream>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
void fun();
int sort_fun(const void*,const void*);
void sortbyvg();
void display();
void setdata();
void fun(){
    float f,*ff=&f;
}
struct crik_player{
    
    char name[20];
    int age;
    int notm;
    int avg;
};
struct crik_player cp[3];
int sort_fun(const void*f,const void*ff){

    return(((struct crik_player*)f)->avg-((struct crik_player*)ff)->avg);

}
void sortbyvg(){

    int i,j;
    struct crik_player t;
    qsort((struct crik_player*)cp,3,sizeof(cp[0]),sort_fun);
    

}
void display(){
    int i;
    for(i=0;i<3;i++){
    cout<<"Name of Player : "<<cp[i].name<<endl;
    cout<<"Age of Player : "<<cp[i].age<<endl;
    cout<<"Number Test Matches Played : "<<cp[i].notm<<endl;
    cout<<"Average Run of Players : "<<cp[i].avg<<endl;
    }
}
void setdata(){
    int i;
    for(i=0;i<3;i++){
    cout<<"\nEnter Name of Player : ";
    cin>>cp[i].name;
    fflush(stdin);

    cout<<"\nEnter Age of Player : ";
    cin>>cp[i].age;
    fflush(stdin);

    cout<<"\nEnter Number Test Matches Played : ";
    cin>>cp[i].notm;
    fflush(stdin);

    cout<<"\nEnter Average Run of Players : ";
    cin>>cp[i].avg;
    fflush(stdin);
    }
}
int main(){

    setdata();
    cout<<"Data Entered is :"<<endl;
    display();

    sortbyvg();
    cout<<"Data Sorted on Average Runs:"<<endl;
    display();
    return 0;
}