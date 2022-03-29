#include<iostream>
#include<malloc.h>
using namespace std;
struct queue{
    int item;
    struct queue *link;
};
struct queue *rear,*front;
void add(int item);
int del_queue();
void display();
int count();
int main(){
    
    int item;
    rear = front=NULL;

    add(10);
    add(20);
    add(30);    
    add(40);
    add(70);

    display();
    cout<<"\nTotal number of Element Prsent is : "<<count();
    
    //Delete Element From Queue
    item=del_queue();
    cout<<"\nDelete Item=\n"<<item;
    display();
    cout<<"\nTotal Number of Element Present is : "<<count();

    item=del_queue();
    cout<<"\nDeleted Items=\n"<<item;
    display();
    cout<<"\nTotal Number of Elemennt present is : "<<count();

    item=del_queue();
    cout<<"\n Deleted item=\n"<<item;
    display();
    cout<<"\nTotal Number of elements present is: "<<count();

    return 0;
}

void add(int item){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->item=item;
    q->link=NULL;
    if(rear==NULL){
        rear = q;
        front = q;
    }
    else{
        q->link=rear;
        rear=q;
    }
}
int del_queue(){
    int item;

    struct queue *q=rear;
    if(front==NULL){
        cout<<"\n\n\t\tQueue is Empty";
        return -1;
    }
    else{
        if(front==rear){
            item=q->item;
            front=rear=NULL;
            free(q);
        }
        else{

            while(q->link->link!=NULL){
                q=q->link;
            }
            item=q->link->item;
            free(q->link);
            front =q;
            q->link=NULL;
        }
    }
    return item;
}
void display(){
    struct queue *q=rear;
    while(q!=NULL){
        cout<<"\n"<<q->item;
        q=q->link;
    }
}
int count(){
    struct queue *q=rear;
    int count=0;
    while(q!=NULL){
        count++;
        q=q->link;
    }
    return count;
}