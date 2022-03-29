#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
void gotoxy(short int col, short int row);
void cal(int yr, int mo, int fd, int da);
static char *months[] = {"january", "february", "march", "april", "may",
                         "june", "july", "August", "september", "octomber", "november", "December"};
void cal(int yr, int mo, int fd, int da)
{
    int i, r, c;
    char a;
    gotoxy(50, 4);
    cout << months[mo - 1] << yr;

    gotoxy(10, 7);
    cout << "------------------------------------"<<endl;

    gotoxy(15, 8);
    cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun"<<endl;

    gotoxy(7, 9);
    cout << "------------------------------------"<<endl;
    cout<<"\n";
    r = 9;
    c = 11 + 6 * fd;
    for (i = 1; i <= da; i++)
    {

        gotoxy(c, r);
        cout<< i;

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

    gotoxy(7,17);
    cout << "\n------------------------------------"<<endl;
}
void gotoxy(short int col, short int row)
{
    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(hstdout, position);
}
int main()
{

    static int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long int ndays, ldays, tydays, tdays;
    int d, i, m, fday, y;
    char ch;

    cout << "Enter Year (1900 onwards) and month (in number)"<<endl;
    cin >> y >> m;

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

    return 0;
}