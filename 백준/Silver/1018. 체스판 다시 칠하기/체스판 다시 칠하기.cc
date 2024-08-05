#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int countRepaints(const vector<string> &board, int x, int y, const vector<string> &pattern)
{
    int repaints{0};
    for (int i{0}; i < 8; ++i)
    {
        for (int j{0}; j < 8; ++j)
        {
            if (board[x + i][y + j] != pattern[i][j])
            {
                ++repaints;
            }
        }
    }
    return repaints;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> board(n);
    
    for (int i{0}; i < n; ++i)
    {
        cin >> board[i];
    }
    
    vector<string> pattern1 = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };

    vector<string> pattern2 = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };
    
    int minRepaints = INT_MAX;
    
    for (int i{0}; i <= n - 8; ++i)
    {
        for (int j{0}; j <= m - 8; ++j)
        {
            int repaints1 = countRepaints(board, i, j, pattern1);
            int repaints2 = countRepaints(board, i, j, pattern2);
            
            minRepaints = min(minRepaints, min(repaints1, repaints2));
        }
    }
    
    cout << minRepaints << "\n";
    
    return 0;
}