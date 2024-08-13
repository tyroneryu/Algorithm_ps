from collections import deque

def print_order(N, M, priorities):
    queue = deque([(priority, idx) for idx, priority in enumerate(priorities)])
    print_count = 0

    while queue:
        current = queue.popleft()
        if any(current[0] < item[0] for item in queue):
            queue.append(current)
        else:
            print_count += 1
            if current[1] == M:
                return print_count

T = int(input())
for _ in range(T):
    N, M = map(int, input().split())
    priorities = list(map(int, input().split()))
    result = print_order(N, M, priorities)
    print(result)