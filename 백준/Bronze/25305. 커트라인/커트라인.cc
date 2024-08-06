#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n{}, k{};
    cin >> n >> k;

    vector<int> points(n);

    for (int i{0}; i < n; ++i)
    {
        cin >> points[i];
    }

    sort(points.begin(), points.end(), greater<int>());

    int cutline = points[k-1];

    cout << cutline << "\n";

    return 0;
}