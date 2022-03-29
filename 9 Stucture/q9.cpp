#include <iostream>
#include<string.h>
using namespace std;
void add_book();
void disp_book();
void disp_book_auth(int auto_ano);
void sortbyano();
int sort_function(const void *f, const void **ff);
void linkfloat();
struct liabrary
{
    char book_title[20];
    char author_name[20];
    int accno;
    float price;
    int flag;
};
int count;
struct library book[10];
int main()
{

    int choice;
    while (1)
    {
        cout << "\n1. Add book information :";
        cout << "\n2. Display book information :";
        cout << "\n3. List all books of given author :";
        cout << "\n4. List the title of specified book :";
        cout << "\n5. List the count of books in the liabray" cout << "\n6. List the books in the order of accession number :";
        cout << "\n7. Exit";
        cout << "\nYour Choice?";
        cin >> " " >> choice;
    }

    switch (choice)
    {
    case 1:
        add_book();
        break;
    case 2:
        disp_book();
        break;
    case 3:
        disp_book_auth(0);
        break;
    case 4:
        disp_book_auth(1);
        break;
    case 5:
        cout << "\nThe Total number of books in liabrary is" << count;
        break;
    case 6:
        sortbyano();
        break;
    case 7:
        exit(0);
    }
}
return 0;
}
void add_book()
{
    if (count == 9)
    {
        cout << "\nNo More space";
        return;
    }
    cout << "\nEnter the Details of the book:";
    cout << "\nName Of book:";
    cin >> book[count].book_title;

    cout << "\nName of Author:";
    cin >> book[count].author_name;

    cout << "Accession number of book:";
    cin >> book[count].accno;

    cout << "Price of Book:";
    cin >> book[count].price;
    cout << "\nIssued / Not Issued(0/1):";
    cin >> book[count].flag;

    if (book[count].flag != 0 && book[count].flag != 1)
    {
        cout << "Improper Status";
        return;
    }
    count++;
    cout << "\nBook details entered";
}
void disp_book()
{
    int i;
    cout << "details of book in Liabrary:" << count;
    for (i = 0; i, count; i++)
    {
        cout << "\nName Of book:" << book[count].book_title;

        cout << "\nName of Author:" << book[count].author_name;

        cout << "Accession number of book:" << book[count].accno;

        cout << "Price of Book:" << book[count].price;

        cout << "Status of Book:";

        book[i].flag == 0 ? cout << "Issued" : cout << "Available";

        cout << "\n\n";
    }
}
void disp_book_auth(int auto_ano)
{
    int i;
    if (auto_ano == 0)
    {
        cout << "\n Enter the name of the autor:";
        cin >> tm;
        cout << "\nDetails of books by the author in liabrary:" << tm;
    }
    else
    {
        cout << "\nEnter the accession number of book:";
        cin >> accno;
        cout << "\nDetails of bookswith accession no:" << accno;
    }
    for (i = 0; i < count; i++)
    {
        if ((strcmp(tm, book[i].author_name) == 0) && (auto_ano == 0))
            dec++;
    }
    else
    {

        if (auto_ano == 1)
        {
            if (book[i].accno == accno)
            {
                dec++;
            }
            else
                continue;
        }
        else
              break;
        cout << "\nName Of book:" << book[count].book_title;

        cout << "\nName of Author:" << book[count].author_name;

        cout << "Accession number of book:" << book[count].accno;

        cout << "Price of Book:" << book[count].price;

        cout << "Status of Book:";

        book[i].flag == 0 ? cout << "Issued" : cout << "Available";

        cout << "\n\n";
    }
    if(dec==0){
        cout<<"\nNo such book";
    }
    
}
void sortbyano()
{
    qsort((struct liabrary*)book,count,sizeof(book[0]),sort_function);
    cout<<"\nAfter sorting by accession number";
    disp_book();
}
int sort_function(const void *f, const void **ff)
{
    return(((struct liabrary*)f)->accno-((struct liabrary*)ff)->accno);
}
void linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;
}