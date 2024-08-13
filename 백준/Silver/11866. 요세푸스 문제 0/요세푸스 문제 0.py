from collections import deque

def josephus_sequence(N, K):
    queue = deque(range(1, N+1))
    result = []
    
    while queue:
        queue.rotate(-(K-1))
        result.append(queue.popleft())
    
    return result

N, K = map(int, input().split())

sequence = josephus_sequence(N, K)

print("<" + ", ".join(map(str, sequence)) + ">")