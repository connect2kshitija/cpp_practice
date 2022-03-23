#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int lat1,lat2,lon1,lon2,dist;

    cout<<"Enter latitude for place 1 : ";
    cin>>lat1;
    
    cout<<"Enter latitude for place 2 : ";
    cin>>lat2;
    
    cout<<"Enter longitude for place 1 : ";
    cin>>lon1;
    
    cout<<"Enter longitude for place 2 : ";
    cin>>lon2;

    lat1=lat1*3.14/180;
    lat2=lat2*3.14/180;
    
    lon1=lon1*3.14/180;
    lon2=lon2*3.14/180;
    
    dist=3963*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(lon2-lon1));

    cout<<"Distance in nautical miles for given places is : "<<dist;
    
    return 0;
    }