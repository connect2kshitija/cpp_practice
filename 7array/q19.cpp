#include <iostream>
using namespace std;
void add_front(int);
void add_rear(int);
int retrive_front(int);
int retrive_rear(int);
void display(void);
int *front, *rear;
int a[26];

int main()
{

    int item;
    front = NULL;
    rear = NULL;

    cout << "Adding element at front of deque : ";

    add_front(10);
    add_front(40);
    add_front(30);
    display();

    cout << "Adding Element at Rear of deque : ";

    add_rear(50);
    display();

    cout << "Retriving Element from front of deque : ";
    item = retrive_front();

    if (item = -1)
    {
        cout << "Deque is Empty";
    }
    else
    {
        cout << "Front item = " << item;
    }
    display();

    cout << "Retriving Element from rear of deque : ";
    item = retrive_front();

    if (item = -1)
    {
        cout << "Deque is Empty";
    }
    else
    {
        cout << "rear item = " << item;
    }
    display();

    return 0;
}
void add_front(int item)
{

    int i, j;
    if (front == NULL)
    {
        front = a;
        *front = item;
        rear = a;
    }
    else
    {
        front = a;
        j = rear - front;

        if (j != 25)
        {
            for (i = j + 1; i >= 0; j--)
            {
                front[i] = front[i - 1];
            }
            *(front + 0) = item;
            rear++;
        }
        else
        {
            cout << "Deque is Full";
        }
    }
}
void add_rear(int item)
{

    int i, j;
    if (front == NULL)
    {
        front = a;
        *front = item;
        rear = a;
    }
    else
    {
        i = rear - front;
        if (i != 25)
        {
            rear++;
            *rear = item;
        }
        else
        {
            cout << "Deque is Full";
        }
    }
}
int retrive_front()
{

    int i, j, item;
    if (rear == NULL)
    {
        cout << "Deque is Empty " << endl;
        return -1;
    }
    else
    {
        item = *rear;
        i = rear - front;

        if (i == 0)
        {
            rear = NULL;
            front = NULL;
        }
        else
        {
            for (j = 0; j <= i - 1; j++)
            {
                front[j] = front[j + 1];
            }
            *rear = 0;
            rear--;
        }
    }
    return 0;
}
int retrive_rear(void)
{

    int i, j, item;
    if (rear == NULL)
    {
        cout << "Deque is Empty " << endl;
        return -1;
    }
    else
    {
        item = *rear;
        i = rear - front;

        if (i == 0)
        {
            rear = NULL;
            front = NULL;
        }
        else
        {
            *rear = 0;
            rear--;
        }
    }
    return 0;
}
void display(void)
{
    int i;
    int *p = front;
    if (p == NULL)
    {
        cout << "\n\n DeQueue is Empty";
    }
    else
    {
        cout << "\n";
        for (i = 0; i <= (rear - front); i++)
        {
            cout << "a[" << i << "]=" << *p++;
        }
    }
}