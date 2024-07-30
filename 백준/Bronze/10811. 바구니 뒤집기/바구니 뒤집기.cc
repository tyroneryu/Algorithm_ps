#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int n, m;
    std::cin >> n >> m;

    vector<int> baskets(n);
    for (int i{0}; i < n; ++i) 
    {
        baskets[i] = i + 1;
    }

    for (int k{0}; k < m; ++k) 
    {
        int a,b;
        cin >> a >> b;
        reverse(baskets.begin() + (a - 1), baskets.begin() + b);
    }

    for (int i{0}; i < n; ++i) 
    {
        cout << baskets[i] << " ";
    }

    return 0;
}