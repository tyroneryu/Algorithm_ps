#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> maxHeap;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) 
    {
        int x;
        cin >> x;
        if (x != 0) 
        {
            maxHeap.push(x);
        } 
        else
        {
            if (!maxHeap.empty()) {
                cout << maxHeap.top() << '\n';
                maxHeap.pop();
            } 
            else
            {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}