from collections import deque

def bfs_tomato():
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    queue = deque()

    for i in range(N):
        for j in range(M):
            if box[i][j] == 1:
                queue.append((i, j))

    while queue:
        x, y = queue.popleft()

        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            if 0 <= nx < N and 0 <= ny < M and box[nx][ny] == 0:
                box[nx][ny] = box[x][y] + 1
                queue.append((nx, ny))

    max_days = 0
    for row in box:
        for tomato in row:
            if tomato == 0:
                return -1
            max_days = max(max_days, tomato)
    
    return max_days - 1

M, N = map(int, input().split())
box = [list(map(int, input().split())) for _ in range(N)]

result = bfs_tomato()
print(result)