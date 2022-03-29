#include<iostream>
using namespace std;
struct date
{
    int day, month, year;
};
int check_date(struct date *dt);
int main(){

    int chkdt;
    struct date d1,d2;

    cout<<"Enter the dates to be compared:";
    chkdt=check_date(&d1);

    if(chkdt==0){
        exit(0);
    }

    fflush(stdin);

    chkdt=check_date(&d2);

    if(chkdt==0){
        exit(0);
    }

    if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year)){
        cout<<"Dates are equal";
    }
    else{
        cout<<"Dates are not equal";
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
