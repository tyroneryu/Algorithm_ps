#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> baskets(n, 0); 

    for (int i{0}; i < m; ++i) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int j = a - 1; j < b; ++j) 
        {
            baskets[j] = c;
        }
    }

    for (int i{0}; i < n; ++i) 
    {
        cout << baskets[i] << " ";
    }
    cout << "\n";

    return 0;
}