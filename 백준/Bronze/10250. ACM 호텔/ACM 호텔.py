def find_room_number(H, W, N):
    Y = N % H
    if Y == 0:
        Y = H
    
    X = (N - 1) // H + 1
    
    return f"{Y}{X:02}"

T = int(input())
for _ in range(T):
    H, W, N = map(int, input().split())
    print(find_room_number(H, W, N))
