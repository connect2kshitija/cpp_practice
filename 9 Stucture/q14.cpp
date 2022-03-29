#include<iostream>
using namespace std;
struct node {

    int data;
    struct node *link;
            
}*p;
void add(int num);
void display();
void add(struct node **q,int num){
    struct node *r,*temp=*q;

    r=malloc(sizeof(struct node));
    r->data = num;
    //if list is Empty add before first node
    if(*q==NULL||(*q)->data>num){
        *q=r;
        (*q)->link=temp;
    }
    else{
        //traverse entire link list to serch position to insert new node
        while(temp->link!=NULL){
            if(temp->data<=num &&(temp->link->data>num || temp->link==NULL))
            {
                r->link=temp->link;
                temp->link=r;
                return ;
            }
            //go to next node
            temp=temp->link;
        }
        r->link=NULL;
        temp->link=r;
    }

}
void display(struct node *q){
    cout<<"\n";
    //traverse Entire link list
    while(q!=NULL){
        cout<<q->data;
        q=q->link;
    }
    cout<<"\n";
}
int main(){
    struct node *l;
    l=NULL;

    add(&l,23);
    add(&l,24); 
    add(&l,78); 
    add(&l,69);   
    add(&l,34); 
    add(&l,57); 
    cout<<"\nElement in linked list in ascending order are:";
    display(l);

    return 0;
}