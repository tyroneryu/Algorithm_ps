from collections import deque

def find_parents(n, edges):
    tree = [[] for _ in range(n + 1)]
    parents = [0] * (n + 1)
    
    for a, b in edges:
        tree[a].append(b)
        tree[b].append(a)
    
    queue = deque([1])
    while queue:
        node = queue.popleft()
        for neighbor in tree[node]:
            if parents[neighbor] == 0:
                parents[neighbor] = node
                queue.append(neighbor)
    
    return parents

n = int(input())
edges = [tuple(map(int, input().split())) for _ in range(n - 1)]

parents = find_parents(n, edges)

for i in range(2, n + 1):
    print(parents[i])