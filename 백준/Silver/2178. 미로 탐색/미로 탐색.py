from collections import deque

def bfs(maze, n, m):

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    queue = deque([(0, 0)])  
    visited = [[False] * m for _ in range(n)]
    visited[0][0] = True
    
    while queue:
        x, y = queue.popleft()
        
        if x == n - 1 and y == m - 1:
            return maze[x][y]
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < n and 0 <= ny < m and maze[nx][ny] == 1 and not visited[nx][ny]:

                visited[nx][ny] = True
                maze[nx][ny] = maze[x][y] + 1
                queue.append((nx, ny))
    
    return -1 

def main():
    n, m = map(int, input().split())
    maze = [list(map(int, input().strip())) for _ in range(n)]
    
    result = bfs(maze, n, m)
    print(result)

if __name__ == "__main__":
    main()
