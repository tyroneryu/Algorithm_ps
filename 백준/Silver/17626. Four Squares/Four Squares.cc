#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

int min_square_sum(int n) 
{
    if (n == 0) return 0;

    queue<pair<int, int>> q;  
    unordered_set<int> visited;  
    q.push({n, 0});
    visited.insert(n);

    while (!q.empty()) 
    {
        int remainder = q.front().first;
        int steps = q.front().second;
        q.pop();

        for (int i = 1; i * i <= remainder; ++i) 
        {
            int next_remainder = remainder - i * i;

            if (next_remainder == 0) 
            {
                return steps + 1;
            }

            if (visited.find(next_remainder) == visited.end()) 
            {
                visited.insert(next_remainder);
                q.push({next_remainder, steps + 1});
            }
        }
    }

    return -1;  
}

int main() 
{
    int n;
    cin >> n;
    cout << min_square_sum(n) << "\n";
    return 0;
}
