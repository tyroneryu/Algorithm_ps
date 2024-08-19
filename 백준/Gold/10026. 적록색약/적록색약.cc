#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N;
char grid[100][100];
bool visited[100][100];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int x, int y, bool isColorBlind) 
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    char currentColor = grid[x][y];

    while (!q.empty()) 
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) 
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) 
            {
                if (isColorBlind)
                {
                    if ((currentColor == 'R' || currentColor == 'G') && (grid[nx][ny] == 'R' || grid[nx][ny] == 'G')) 
                    {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                    else if (currentColor == 'B' && grid[nx][ny] == 'B') 
                    {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                } 
                else
                {
                    if (grid[nx][ny] == currentColor) 
                    {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }
}

int countRegions(bool isColorBlind) 
{
    int count = 0;
    fill(&visited[0][0], &visited[0][0] + sizeof(visited), false);

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (!visited[i][j]) 
            {
                bfs(i, j, isColorBlind);
                count++;
            }
        }
    }

    return count;
}

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cin >> grid[i][j];
        }
    }

    int normalCount = countRegions(false);
    int colorBlindCount = countRegions(true);

    cout << normalCount << " " << colorBlindCount << "\n";

    return 0;
}