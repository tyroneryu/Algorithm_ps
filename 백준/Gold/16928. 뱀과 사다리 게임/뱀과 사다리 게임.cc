#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int board[101];
bool visited[101]; 

int bfs() 
{
    queue<pair<int, int>> q;  
    q.push({1, 0});
    visited[1] = true;
    
    while (!q.empty()) 
    {
        int position = q.front().first;
        int rolls = q.front().second;
        q.pop();

        for (int i = 1; i <= 6; i++) 
        {
            int next_position = position + i;
            if (next_position > 100) continue;  
            
            next_position = board[next_position]; 
            
            if (!visited[next_position]) 
            {
                if (next_position == 100) return rolls + 1; 
                visited[next_position] = true;
                q.push({next_position, rolls + 1});
            }
        }
    }
    return -1;  
}

int main() 
{
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= 100; i++) 
    {
        board[i] = i;
    }

    for (int i = 0; i < N; i++) 
    {
        int x, y;
        cin >> x >> y;
        board[x] = y;
    }

    for (int i = 0; i < M; i++) 
    {
        int u, v;
        cin >> u >> v;
        board[u] = v;
    }

    int result = bfs();
    cout << result << "\n";

    return 0;
}
