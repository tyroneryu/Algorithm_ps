#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int sides[3] = {a, b, c};
    sort(sides, sides + 3);
    
    int a_side = sides[0];
    int b_side = sides[1];
    int c_side = sides[2];
    
    while (c_side >= a_side + b_side) 
    {
        c_side--;
    }
    
    int perimeter = a_side + b_side + c_side;
    cout << perimeter <<"\n";

    return 0;
}