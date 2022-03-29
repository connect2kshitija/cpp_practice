#include<iostream>
using namespace std;

struct stud{

    int r_no;
    char name[50];
    char d_name[10];
    char course[20];
    int jy;
};
struct stud s[450]{};
void set_student_data();
void display();
void name_acc_year(int);
void data_acc_rollno(int);

void set_student_data(){
    int i;
    for(i=0;i<450;i++){
        cout<<"Enter Roll Number of Student : "<<endl;
        cin>>s[i].r_no;
        cout<<"Enter Name Of Student :"<<endl;
        cin>>s[i].name;
        cout<<"Enter Department Name :"<<endl;
        cin>>s[i].d_name;
        cout<<"Enter Course Name: "<<endl;
        cin>>s[i].course;
        cout<<"Enter Year of Joining:"<<endl;
        cin>>s[i].jy;
    }
}
void display(){

    int i;
     for(i=0;i<450;i++){
        cout<<"Roll Number of Student : "<<endl;
        cout<<i+1<<"   "<<s[i].r_no;
        cout<<"Name Of Student :"<<endl;
        cout<<i+1<<"    "<<s[i].name;
        cout<<"Department Name :"<<endl;
        cout<<i+1<<"    "<<s[i].d_name;
        cout<<"Course Name: "<<endl;
        cout<<i+1<<"    "<<s[i].course;
        cout<<"Year of Joining:"<<endl;
        cout<<i+1<<"    "<<s[i].jy;
    }
}

void name_acc_year(int y){
   
   int i,j=0;
   for(i=0;i<450;i++){

       if(y==s[i].jy){

       cout<<"Student Joined in Smae Year :"<<s[i].name<<" "<<s[i].jy<<endl;
       j=1;
       }
   }

   if(i==0){
       cout<<"No Student Has Joined This Year"<<y<<endl;
   }

}
void data_acc_rollno(int r){
    
    int i,j=0;
    for(i=0;i<450;i++){
        
        if(s[i].r_no==r){
        cout<<"Roll Number of Student : "<<endl;
        cout<<i+1<<"    "<<s[i].r_no;
        cout<<"Name Of Student :"<<endl;
        cout<<i+1<<"    "<<s[i].name;
        cout<<"Department Name :"<<endl;
        cout<<i+1<<"    "<<s[i].d_name;
        cout<<"Course Name: "<<endl;
        cout<<i+1<<"    "<<s[i].course;
        cout<<"Enter Year Of Joining:";
        cout<<i+1<<"    "<<s[i].jy;
        j=1;
        }
    }
    if(j==0){
        cout<<"No Such Roll Number is Present ";
    }
}

int main(){
    
    int i,r,y;

    cout<<"Enter The Data For Each Student: "<<endl;
    set_student_data();

    display();

    cout<<"Enter The Year of Joining of Student: "<<endl;
    cin>>y;

    name_acc_year(y);

    cout<<"Enter The Roll Number Of Student:"<<endl;
    data_acc_rollno(r);

    return 0;
}