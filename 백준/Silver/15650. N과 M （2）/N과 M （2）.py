from itertools import combinations

def print_combinations(N, M):
    numbers = range(1, N + 1)
    for combo in combinations(numbers, M):
        print(' '.join(map(str, combo)))

N, M = map(int, input().split())
print_combinations(N, M)