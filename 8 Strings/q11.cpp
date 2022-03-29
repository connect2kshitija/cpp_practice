// Inventory Manegement
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *inven[3][4]; // 3 Divisions and 4 categories
    int comp[3];
    int *c;
    char ch = 'y';
    int t, i, j, pno, d, comp_no;
    int tot = 0, cost[4] = {100, 200, 300, 400};
    long int tot_in_val = 0;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {

            *c=*int malloc(3*sizeof(int));
            inven[i][j] = c;
            *(inven[i][j] + 0) = 0;
            *(inven[i][j] + 1) = 0;
            *(inven[i][j] + 2) = 0;
        }
    }
    while (ch == 'y' || ch == 'Y')
    {

        cout << "\nEnter The Division 0,1 or 2 :";
        cin>>d;
    
        if(d<0||d>2){
            cout<<"\nInvalid Division";
            continue;
        }
        cout <<"\nSelect Product Number \n from 0,1,2 or 3 which represents it's category : ";
        cin>>pno;

        if(pno<0||pno>3){
            cout<<"\nInvalid Division";
            continue;
        }

        cout<<"\nSelect company Number 0,1 or 2 which product is purchsed :";
        cin>>comp_no;

        if(comp_no>=0&&comp_no<=2)*(inven[d][pno]+comp_no)=*(inven[d][pno]+comp_no)+1;
        else{
            cout<<"Invalid Company Number";
            continue;
        }
        cout<<"\n \nWant to Enter another Data (y/n) \n\t\t";
        fflush(stdin);

        cin>>ch;
        fflush(stdin);
    }

    cout<<"Total Quantity Of product prsent in Division :";
    cout<<"\n product \t0\t1\t2\t3\n";

    for(i=0;i<=2;i++){
        cout<<"Division No :";
        for(j=0;j<=3;j++){

            t=*(inven[i][j]+0)+*(inven[i][j]+1)+*(inven[i][j]+2);
            cout<<"\n"<<t;
        }
        cout<<"\n";
    }

    cout<<"\nTotal cost present in each division are :\n";

    for(i=0;i<=2;i++){
        cout<<"Division No : "<<i+1;
        for(j=0;i<=3;i++){
            t=*(inven[i][j]+0)+*(inven[i][j]+1)+*(inven[i][j]);
            tot=tot+t*cost[j];
        }
        cout<<"\tRs="<<tot;
        cout<<"\n";
        tot_in_val=tot_in_val+tot;
        tot=0;
    }

    cout<<"Total Inventory cost is ";
    return 0;
}