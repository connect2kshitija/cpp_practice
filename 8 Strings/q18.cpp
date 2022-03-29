//convert Number into word
#include <iostream>
using namespace std;
void convert(long, char[]);
char *one[] = {
    " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "tweleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};
char *ten[] = {
    " ", " ", "twentey", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
int main()
{
    long num;
    cout<<"Enter Number (not max than 9 digits ):"<<endl;
    cin>>num;

    if(num<=0){
        cout<<"no negative Number Please !!!";
    }
    else{
        convert((num/10000000),"Crore");
        convert(((num/100000)%100),"lakh");
        convert(((num/1000)%100),"Thousand");
        convert(((num/100)%10),"Hundred");
        convert((num%100)," ");
    }
    return 0;
}
void convert(long n,char *s){

    if(n>19){
        cout<<" "<<ten[n/10]<<" "<<one[n%10];
    }
    else{
        cout<<" "<<one[n];
    }
    if(n){
        cout<<" "<<s;
    }
}