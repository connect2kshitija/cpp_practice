#include <iostream>
#define NOOFEMP 5
using namespace std;
struct date
{
    int day, month, year;
};
int check_date(struct date *dt);
int main()
{

    struct employee
    {
        int code;
        char emp_name[20];
        struct date doj;
    };
    struct employee emp[NOOFEMP];
    int i, chkdt;
    struct date curr;

    cout << "Enter Current Date :" << endl;
    chkdt = check_date(&curr);
    if (chkdt == 0)
    {
        cout << "Improper Date  Entered :";
        exit(0);
    }
    cout << "Enter the Information for " << NOOFEMP << " Employees: " << endl;

    for (i = 0; i < NOOFEMP; i++)
    {

        fflush(stdin);
        cout << "\n Emp : "
             << "Code : " << i;
        cin >> emp[i].code;
        cout << "\n Name : ";
        cin >> emp[i].emp_name;
        cout << "\n Date of joining(dd-mm-yyyy) : ";
        chkdt = check_date(&emp[i].doj);
        if (chkdt == 0)
        {
            cout << "Improper Date  Entered :";
            exit(0);
        }
    }

    for (i = 0; i < NOOFEMP; i++)
    {

        if (curr.year > emp[i].doj.year + 3)
        {

            cout << "\n"
                 << emp[i].emp_name;
            break;
        }
        else
        {
            if (curr.year == emp[i].doj.year + 3)
            {
                if (curr.month > emp[i].doj.month)
                {
                    cout << "\n"
                         << emp[i].emp_name;
                }
                else
                {

                    if ((curr.month == emp[i].doj.month) && (curr.day >= emp[i].doj.day))
                    {
                        cout << "\n"
                             << emp[i].emp_name;
                    }
                }
            }
        }
    }

    return 0;
}
int check_date(struct date *dt)
{

    cout << "Enter Day : " << endl;
    cin >> dt->day;
    cout << "Enter Month : " << endl;
    cin >> dt->month;
    cout << "Enter Year : " << endl;
    cin >> dt->year;
    if ((dt->day > 31 || dt->day < 0) || (dt->month > 12 || dt->month < 0) || (dt->year > 9999 || dt->year < 1000))
    {
        return (0);
    }
    else
    {
        return (1);
    }
}