#include<iostream>
using namespace std;
int main(){

    int arr[3][2][3] = {
        {
            {1,2,3},
            {2,3,4}
        },
        {
            {3,4,5},
            {6,9,8}
        },
        {
            {9,7,6},
            {4,5,2}
        }
    };
    
    cout<<arr;
    return 0;
}