#include <iostream>
#include <malloc.h>
using namespace std;
struct linklist
{
    int item;
    struct linklist *link;
};
struct linklist *p;

void add(int item);
void add_at_loc(int item, int loca);
void add_end(int item);
void display();

int main()
{

    add(20);
    add(30);
    add(90);
    add(40);

    cout << "\nItems added items in the linked list"<<endl;
    display();

    cout << "\nItems added at end of list :"<<endl;
    add_end(60);
    display();

    cout << "\nItem added at middle:"<<endl;
    add_at_loc(87, 4);
    display();
    return 0;
}
void add(int item)
{
    struct linklist *q = (struct linklist *)malloc(sizeof(struct linklist));
    q->item = item;
    q->link = NULL;
    if (p == NULL)
    {
        p = q;
    }
    else
    {
        q->link = p;
        p = q;
    }
}
void add_at_loc(int item, int loca)
{

    struct linklist *q = (struct linklist *)malloc(sizeof(struct linklist));
    struct linklist *r, *w = p;
    int i = 1;

    q->item = item;
    q->link = NULL;
    if (p == NULL)
    {
        p = q;
    }
    else
    {
        while ((w->link != NULL) && (i != loca))
        {
            i++;
            w = w->link;
        }
        if (i == loca)
        {
            r = w->link;
            w->link = q;
            q->link = r;
        }
        else
        {
            w->link = q;
        }
    }
}
void add_end(int item)
{
    struct linklist *q = (struct linklist *)malloc(sizeof(struct linklist));
    struct linklist *w = p;

    q->item = item;
    q->link = NULL;
    if (p == NULL)
    {
        p = q;
    }
    else
    {
        while (q != NULL)
        {
            w = w->link;
            w->link = q;
        }
    }
}
void display()
{
    struct linklist *q = p;
    int i = 0;
    while (q != NULL)
    {
        i++;
        cout << "\nitem number=" << i << " " << q->item << endl;
        q = q->link;
    }
}