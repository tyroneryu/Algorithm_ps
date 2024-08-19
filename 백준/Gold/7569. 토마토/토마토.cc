#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int M, N, H;
int box[100][100][100];
int days[100][100][100];
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

bool is_valid(int x, int y, int z) 
{
    return x >= 0 && x < N && y >= 0 && y < M && z >= 0 && z < H;
}

int bfs() 
{
    queue<tuple<int, int, int>> q;

    for (int i = 0; i < H; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            for (int k = 0; k < M; k++) 
            {
                if (box[i][j][k] == 1) 
                {
                    q.push({j, k, i});
                    days[i][j][k] = 0;
                }
            }
        }
    }

    while (!q.empty()) 
    {
        int x, y, z;
        tie(x, y, z) = q.front();
        q.pop();

        for (int i = 0; i < 6; i++) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];

            if (is_valid(nx, ny, nz) && box[nz][nx][ny] == 0) 
            {
                box[nz][nx][ny] = 1;
                days[nz][nx][ny] = days[z][x][y] + 1;
                q.push({nx, ny, nz});
            }
        }
    }

    int max_days = 0;
    for (int i = 0; i < H; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            for (int k = 0; k < M; k++) 
            {
                if (box[i][j][k] == 0) 
                {
                    return -1;
                }
                max_days = max(max_days, days[i][j][k]);
            }
        }
    }

    return max_days;
}

int main() 
{
    cin >> M >> N >> H;

    for (int i = 0; i < H; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            for (int k = 0; k < M; k++) 
            {
                cin >> box[i][j][k];
                days[i][j][k] = -1;
            }
        }
    }

    int result = bfs();

    cout << result << "\n";

    return 0;
}