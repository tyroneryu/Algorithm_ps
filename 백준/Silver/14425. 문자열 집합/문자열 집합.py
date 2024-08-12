N, M = map(int, input().split()) 
S = set(input().strip() for _ in range(N))  

count = 0
for _ in range(M):
    check_str = input().strip()
    if check_str in S:
        count += 1

print(count)