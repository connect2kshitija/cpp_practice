#include <iostream>
using namespace std;
int main()
{

    int length, breadth, AreaofRect, PeriOfRect;

    float radius, area_of_circle, peri_of_circle;

    cout << "Enter length : \n";
    cin >> length;
    cout << "Enter Breadth : \n";
    cin >> breadth;

    cout << "Enter Radius of circle : \n";
    cin >> radius;

    AreaofRect = length * breadth;

    PeriOfRect = 2 * length + 2 * breadth;

    area_of_circle = 3.14 * radius * radius;

    peri_of_circle = 2 * 3.14 * radius;

    cout << "Area of rectangle : "
         << AreaofRect;

    cout << "\nPerimeter o rectangle : " << PeriOfRect;

    cout << "\nArea of circle : " << area_of_circle;

    cout << "\nCircumference of circle : "
         << peri_of_circle;

    return 0;
}