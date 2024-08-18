from collections import deque

def bfs(N, K):
    max_pos = 100001
    visited = [False] * max_pos
    queue = deque([(N, 0)]) 
    
    while queue:
        current, time = queue.popleft()

        if current == K:
            return time

        if not visited[current]:
            visited[current] = True

            if current - 1 >= 0:
                queue.append((current - 1, time + 1))
            if current + 1 < max_pos:
                queue.append((current + 1, time + 1))
            if current * 2 < max_pos:
                queue.append((current * 2, time + 1))

N, K = map(int, input().split())

result = bfs(N, K)

print(result)