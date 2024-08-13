from collections import deque

def bfs(n, m, grid, start_x, start_y):
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    distances = [[-1] * m for _ in range(n)]
    queue = deque([(start_x, start_y)])
    distances[start_x][start_y] = 0
    
    while queue:
        x, y = queue.popleft()
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < n and 0 <= ny < m and grid[nx][ny] == 1 and distances[nx][ny] == -1:
                distances[nx][ny] = distances[x][y] + 1
                queue.append((nx, ny))
    
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 0:
                distances[i][j] = 0
    
    return distances

n, m = map(int, input().split())
grid = []
start_x = start_y = -1

for i in range(n):
    row = list(map(int, input().split()))
    for j in range(m):
        if row[j] == 2:
            start_x, start_y = i, j
    grid.append(row)

distances = bfs(n, m, grid, start_x, start_y)

for row in distances:
    print(" ".join(map(str, row)))