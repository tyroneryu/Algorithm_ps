#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, y;
    int minX = 10001, maxX = -10001, minY = 10001, maxY = -10001;

    for(int i{0}; i<n; i++)
    {
        cin >> x >> y;
        if (x < minX) minX = x;
        if (x > maxX) maxX = x;
        if (y < minY) minY = y;
        if (y > maxY) maxY = y;
    }

    int width = maxX - minX;
    int height = maxY - minY;

    cout << width * height << "\n";

    return 0;
}