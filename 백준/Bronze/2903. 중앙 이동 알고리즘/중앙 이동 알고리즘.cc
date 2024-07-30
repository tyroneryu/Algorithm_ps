#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int points_per_side = pow(2, n) + 1;

    int total_points = points_per_side * points_per_side;

    cout << total_points << "\n";
}