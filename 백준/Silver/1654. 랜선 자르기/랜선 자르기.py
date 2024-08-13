def count_lan_cables(lans, length):
    return sum(lan // length for lan in lans)

def find_max_length(lans, N):
    low, high = 1, max(lans)
    best_length = 0
    
    while low <= high:
        mid = (low + high) // 2
        if count_lan_cables(lans, mid) >= N:
            best_length = mid
            low = mid + 1
        else:
            high = mid - 1
            
    return best_length

K, N = map(int, input().split())
lans = [int(input()) for _ in range(K)]

result = find_max_length(lans, N)

print(result)
