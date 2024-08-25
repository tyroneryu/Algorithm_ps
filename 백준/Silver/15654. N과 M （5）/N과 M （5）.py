from itertools import permutations

def print_permutations(arr, M):
    arr.sort()  
    for perm in permutations(arr, M):
        print(' '.join(map(str, perm)))

N, M = map(int, input().split())
arr = list(map(int, input().split()))

print_permutations(arr, M)