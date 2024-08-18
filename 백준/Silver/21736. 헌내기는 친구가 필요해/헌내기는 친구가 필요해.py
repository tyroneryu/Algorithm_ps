from collections import deque

def bfs(campus, start_x, start_y, n, m):
    queue = deque([(start_x, start_y)])
    visited = [[False] * m for _ in range(n)]
    visited[start_x][start_y] = True
    
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    
    people_count = 0
    
    while queue:
        x, y = queue.popleft()
        
        if campus[x][y] == 'P':
            people_count += 1
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and campus[nx][ny] != 'X':
                visited[nx][ny] = True
                queue.append((nx, ny))
    
    return people_count

n, m = map(int, input().split())
campus = [input().strip() for _ in range(n)]

start_x = start_y = 0
for i in range(n):
    for j in range(m):
        if campus[i][j] == 'I':
            start_x, start_y = i, j
            break

result = bfs(campus, start_x, start_y, n, m)

if result > 0:
    print(result)
else:
    print("TT")