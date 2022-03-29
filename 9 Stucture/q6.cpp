#include <iostream>
using namespace std;
struct automobile
{
    int s_no;
    int yom;
    int quantity;
    char material[20];
};
struct automobile part[2];
void display();
void set_data();
void retrive();
void display()
{
    int i;
    for (i = 0; i <= 2; i++)
    {
        cout << "Number of Automobile Part :" << i;
        cout << "\nSerial Number : " << part[i].s_no;
        cout << "\nYear of Manufacture : " << part[i].yom;
        cout << "\nQuantity : " << part[i].quantity;
        cout << "\nMaterial Used: " << part[i].material;
    }
}
void set_data()
{

    int i;
    for (i = 0; i <= 2; i++)
    {
        cout << "Number of Automobile Part :";
        cin >> i;
        while (i)
        {
            cout << "\nEnter Serial Number : ";
            cin >> part[i].s_no;
            if ((part[i].s_no >= 0xAA0) && (part[i].s_no <= 0xff9))
            {
                break;
            }
        }
        cout << "\nEnter Year of Manufacture : ";
        cin >> part[i].yom;
        fflush(stdin);
        cout << "\nEnter Quantity : ";
        cin >> part[i].quantity;
        fflush(stdin);
        cout << "\nEnter Material Used: ";
        cin >> part[i].material;
    }
}
void retrive()
{
    int i, j = 0;
    cout << "List Of Part Between BB1 to CC6 :" << endl;
    for (i = 0; i <= 2; i++)
    {
        if ((part[i].s_no >= 0xbb1) && (part[i].s_no <= 0xcc6))
        {
            j = 1;
            cout << "Number of Automobile Part :" << i;
            cout << "\nSerial Number : " << part[i].s_no;
            cout << "\nYear of Manufacture : " << part[i].yom;
            cout << "\nQuantity : " << part[i].quantity;
            cout << "\nMaterial Used: " << part[i].material;
        }
    }

    if(j==0){
        cout<<"No Such Record Present";
    }
}
int main()
{

    int i;
    set_data();
    display();
    retrive();
    return 0;
}