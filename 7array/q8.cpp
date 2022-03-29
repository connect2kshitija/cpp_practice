#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int arr[4][4] = 
   {
        {1, 4, 15, 7},
        {8, 10, 2, 11},
        {4, 3, 6, 13},
        {2, 9, 5, 0}
    };
void check()
{
    static int move = 0;
    int k = 1, i, j;

    move++;
    gotoxy(30, 24);
    cout << "no. of moves = " << move;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (arr[i][j] == 0)
            {
                continue;
            }
            else
            {
                if (arr[i][j] == k)
                {
                    k++;
                }
                else
                {
                    return;
                }
            }
        }
    }
    exit(0);
}

void boxes()
{
    int r, c;

    for (c = 30; c <= 42; c++)
    {

        for (r = 8; r <= 16; r++)
        {

            gotoxy(c, r);
            cout << 196;
        }
    }

    for (r = 8; r <= 16; r++)
    {
        for (c = 30; c <= 42; c++)
        {

            gotoxy(c, r);
            cout << 179;
        }
    }

    for (c = 33; c <= 32; c++)
    {
        gotoxy(c, 8);
        cout << 194;

        gotoxy(c, 16);
        cout << 193;
    }

    for (r = 10; r <= 14; r++)
    {

        gotoxy(30, r);
        cout << 195;

        gotoxy(42, r);
        cout << 180;
    }

    for (r = 10; r <= 14; r++)
    {
        for (c = 33; c <= 39; c = +3)
        {

            gotoxy(c, r);
            cout << 197;
        }
    }

    gotoxy(30, 8);
    cout << 218;

    gotoxy(42, 8);
    cout << 191;

    gotoxy(30, 16);
    cout << 192;

    gotoxy(42, 16);
    cout << 217;
}
void display()
{

    int r = 9, c = 31, i, j;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {

            if (arr[i][j] == 0)
            {

                gotoxy(c, r);
                cout << " ";
            }
            else
            {
                gotoxy(c, r);
                cout << arr[i][j];
            }
            c = c + 3;
        }
        r = r + 2;
        c = 31;
    }
}
int getkey()
{
    int ch;
    ch = getch();
    if (ch == 0)
    {
        ch = getch();
        return ch;
    }
    return ch;
}
void gotoxy(short int col, short int row)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(hStdout, position);
}
int main()
{

    int row = 3, col = 3, t, ch;
    boxes();
    display();

    while (1)
    {
        ch = getkey();
        switch (ch)
        {

        case 80:
            if (row == 0)
            {
                cout << "\a";
                break;
            }
            t = arr[row][col];
            arr[row][col] = arr[row - 1][col];
            arr[row - 1][col] = t;
            col--;
            display();
            break;

        case 77:
            if (col == 0)
            {
                cout << "\a";
                break;
            }
            t = arr[row][col];
            arr[row][col] = arr[row][col - 1];
            arr[row][col - 1] = t;
            col--;
            display();
            break;
        case 72:
            if (row == 3)
            {
                cout << "\a";
                break;
            }

            t = arr[row][col];
            arr[row][col] = arr[row + 1][col];
            arr[row + 1][col] = t;
            row++;
            display();
            break;
        case 75:
            if (col == 3)
            {

                cout << "\a";
                break;
            }
            t = arr[row][col];
            arr[row][col] = arr[row][col + 1];
            arr[row][col + 1] = t;
            col++;
            display();
            break;
        case 27:
            exit(0);
        }
        check();
    }

    return 0;
}
