#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> baskets(n + 1);  
    for (int i{1}; i <= n; ++i) 
    {
        baskets[i] = i;  
    }

    for (int j{0}; j < m; ++j) 
    {
        int a, b;
        cin >> a >> b;
 
        swap(baskets[a], baskets[b]);
    }

    for (int k{1}; k <= n; ++k) 
    {
        cout << baskets[k] << " ";
    }
    cout << "\n";

    return 0;
}