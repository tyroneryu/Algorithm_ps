#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

void sync(priority_queue<int>& maxHeap, priority_queue<int, vector<int>, greater<int>>& minHeap, unordered_map<int, int>& freq) 
{
    while (!maxHeap.empty() && freq[maxHeap.top()] == 0) 
    {
        maxHeap.pop();
    }
    while (!minHeap.empty() && freq[minHeap.top()] == 0) 
    {
        minHeap.pop();
    }
}

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int k;
        cin >> k;

        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int, int> freq;

        for (int i = 0; i < k; i++) 
        {
            char cmd;
            int num;
            cin >> cmd >> num;

            if (cmd == 'I') 
            {
                maxHeap.push(num);
                minHeap.push(num);
                freq[num]++;
            } 
            else if (cmd == 'D') 
            {
                if (num == 1 && !maxHeap.empty()) 
                {
                    sync(maxHeap, minHeap, freq);
                    if (!maxHeap.empty()) {
                        int maxVal = maxHeap.top();
                        maxHeap.pop();
                        freq[maxVal]--;
                    }
                } 
                else if (num == -1 && !minHeap.empty()) 
                {
                    sync(maxHeap, minHeap, freq);
                    if (!minHeap.empty()) {
                        int minVal = minHeap.top();
                        minHeap.pop();
                        freq[minVal]--;
                    }
                }
            }
        }

        sync(maxHeap, minHeap, freq);

        if (maxHeap.empty()) 
        {
            cout << "EMPTY" << "\n";
        } else {
            cout << maxHeap.top() << " " << minHeap.top() << "\n";
        }
    }

    return 0;
}
