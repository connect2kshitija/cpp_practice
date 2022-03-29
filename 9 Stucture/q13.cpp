#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
void push(struct node **s,int item);
void display(struct node *q);
int pop(struct node **s);
int count(struct node *q);
int main(){
    struct node *top;
    int t,i,item;

    top=NULL;

    push(&top,45);
    push(&top,46);
    push(&top,39);
    push(&top,98);

    display(top);

    t=count(top);
    cout<<"\nTotal items =\n"<<t;

    cout<<"\nPopped :";
    item=pop(&top);
    cout<<"\n"<<item;

    display(top);
    t=count(top);
    cout<<"\nTotal items ="<<t;
    return 0;
}
void push(struct node **s,int item){
    struct node *q;

    q=(struct node *)malloc(sizeof(struct node));
    q->data=item;
    q->link=*s;
    *s=q;
}
int pop(struct node **s){
    int item;
    struct node *q;
    if(*s==NULL){
        cout<<"Stack is Empty";
    }
    else{
        q=*s;
        item=q->data;
        *s=q->link;
        free(q);
        return(item);
    }
}
void display(struct node *q){
while(q!=NULL){
    cout<<"\t"<<q->data;
    q=q->link;
}
}
int count(struct node *q){
    int c=0;

    while(q!=NULL){
        q=q->link;
        c++;
    } 
    return c;
}