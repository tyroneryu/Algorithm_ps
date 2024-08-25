def backtrack(N, M, start, path):
    if len(path) == M:
        print(' '.join(map(str, path)))
        return
    
    for i in range(start, N + 1):
        backtrack(N, M, i, path + [i])

N, M = map(int, input().split())
backtrack(N, M, 1, [])