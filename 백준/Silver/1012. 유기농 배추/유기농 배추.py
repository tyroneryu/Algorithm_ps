import sys
sys.setrecursionlimit(10000)

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def dfs(x, y, field, visited, M, N):
    visited[x][y] = True
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < M and 0 <= ny < N and not visited[nx][ny] and field[nx][ny] == 1:
            dfs(nx, ny, field, visited, M, N)

def solve():
    T = int(input())
    for _ in range(T):
        M, N, K = map(int, input().split())
        field = [[0] * N for _ in range(M)]
        visited = [[False] * N for _ in range(M)]
        
        for _ in range(K):
            x, y = map(int, input().split())
            field[x][y] = 1
        
        worm_count = 0
        for i in range(M):
            for j in range(N):
                if field[i][j] == 1 and not visited[i][j]:
                    dfs(i, j, field, visited, M, N)
                    worm_count += 1
        
        print(worm_count)

if __name__ == "__main__":
    solve()