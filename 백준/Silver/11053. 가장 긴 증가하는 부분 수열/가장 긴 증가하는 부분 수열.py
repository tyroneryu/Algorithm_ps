def longest_increasing_subsequence(A):
    N = len(A)
    dp = [1] * N

    for i in range(1, N):
        for j in range(i):
            if A[i] > A[j]:
                dp[i] = max(dp[i], dp[j] + 1)

    return max(dp)

N = int(input())
A = list(map(int, input().split()))

print(longest_increasing_subsequence(A))