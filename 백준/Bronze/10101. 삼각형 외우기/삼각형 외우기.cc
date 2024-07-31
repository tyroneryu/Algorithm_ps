#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
     int angle1, angle2, angle3;
    cin >> angle1 >> angle2 >> angle3;

    int sum = angle1 + angle2 + angle3;

    if (sum != 180) 
    {
        cout << "Error" << endl;
    } 
    else if (angle1 == 60 && angle2 == 60 && angle3 == 60) 
    {
        cout << "Equilateral" << endl;
    } 
    else if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1) 
    {
        cout << "Isosceles" << endl;
    } 
    else 
    {
        cout << "Scalene" << endl;
    }

    return 0;
}