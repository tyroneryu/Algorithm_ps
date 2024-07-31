#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int distance_to_left = x;
    int distance_to_bottom = y;
    int distance_to_right = w - x;
    int distance_to_top = h - y;

    int min_distance = min({distance_to_left, distance_to_bottom, distance_to_right, distance_to_top});

    cout << min_distance << "\n";

    return 0;
}