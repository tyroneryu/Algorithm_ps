#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    while (true) 
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;

        int sides[] = {a, b, c};
        sort(sides, sides + 3);

        int x = sides[0];
        int y = sides[1];
        int z = sides[2];

        if (z >= x + y) 
        {
            cout << "Invalid" << "\n";
        } 
        else if (x == y && y == z) 
        {
            cout << "Equilateral" << "\n";
        }
        else if (x == y || y == z || x == z) 
        {
            cout << "Isosceles" << "\n";
        } else 
        {
            cout << "Scalene" << "\n";
        }
    }

    return 0;
}