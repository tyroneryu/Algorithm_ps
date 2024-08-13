def count_trailing_zeros(N):
    count = 0
    i = 5
    while N >= i:
        count += N // i
        i *= 5
    return count

N = int(input())

print(count_trailing_zeros(N))
