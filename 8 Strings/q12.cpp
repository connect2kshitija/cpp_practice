#include <iostream>
#include<conio.h>
#include <windows.h>
void cal(int yr, int mo, int fd, int da);
void gotoxy(short int col, short int row);
char *month[] = {"january", "Febuary", "March", "April", "May", "june", "july", "August", "September", "November", "December"};
using namespace std;
void cal(int yr, int mo, int fd, int da)
{
    int i, r, c;
    char a;
    gotoxy(50, 4);
    cout << month[mo - 1] << yr;

    gotoxy(5, 5);
    cout << "------------------------------------" << endl;

    gotoxy(10, 6);
    cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun" << endl;

    gotoxy(5, 7);
    cout << "------------------------------------" << endl;
    cout << "\n";
    r = 9;
    c = 11 + 6 * fd;
    for (i = 1; i <= da; i++)
    {

        gotoxy(c, r);
        cout << i;

        if (c <= 41)
        {
            c = c + 6;
        }
        else
        {
            c = 11;
            r = r + 1;
        }
    }

    gotoxy(5, 15);
    cout << "\n------------------------------------" << endl;
}
void gotoxy(short int col, short int row)
{
    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(hstdout, position);
}
int getkey(){
    int ch;
    ch=getch();
    if(ch==224||0)
    {
        ch=getch();
        return ch;
    }
    return ch;
}
int main()
{

    static int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long int ndays, ldays, tydays, tdays;
    int d, i, m, fday, y;
    char ch;

    cout << "Enter Year (1900 onwards) and month (in number)" << endl;
    cin >> y >> m;

    while (1)
    {
        ndays = (y - 1) * 365;                               // normal year days
        ldays = (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400; // leap year days
        tdays = ndays + ldays;                               // total days

        // Specifing Days in month of february
        if ((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        {
            days[1] = 29;
        }
        else
        {
            days[1] = 28;
        }

        // days before given day
        d = days[m - 1];
        tydays = 0;

        for (i = 0; i <= m - 2; i++)
        {

            tydays = tydays + days[i]; // total year days
        }

        tydays = tydays + tdays;
        fday = tdays % 7;
        cal(y, m, fday, d);
        ch = getkey();
        switch (ch)
        {

        case 77:
            if (m == 12)
            {
                y++;
                m = 1;
            }
            else
            {
                m++;
            }
            break;
        case 72:
            y++;
            continue;
        case 75:
            if (m == 1)
            {
                y--;
                m = 12;
            }
            else
            {
                m--;
            }
            break;
        case 80:
            y--;
            continue;
        case 1:
            exit(0);
        }
    }
    return 0;
}