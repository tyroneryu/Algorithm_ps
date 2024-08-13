N = int(input())
A = set(map(int, input().split())) 
M = int(input())
queries = list(map(int, input().split()))

for q in queries:
    if q in A:
        print(1)
    else:
        print(0)