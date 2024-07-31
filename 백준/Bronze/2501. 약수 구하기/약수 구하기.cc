#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> divisors;

    for(int i{1}; i<=n; i++)
    {
        if(n%i ==0)
        {
            divisors.push_back(i);
        }
    }

    if(k<=divisors.size())
    {
        cout << divisors[k-1] << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }

    return 0;
}