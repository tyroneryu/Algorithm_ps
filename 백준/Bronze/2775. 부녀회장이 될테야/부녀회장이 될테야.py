def calculate_people(k, n):
    dp = [[0] * (n + 1) for _ in range(k + 1)]

    for i in range(1, n + 1):
        dp[0][i] = i

    for i in range(1, k + 1):
        for j in range(1, n + 1):
            dp[i][j] = dp[i][j-1] + dp[i-1][j]

    return dp[k][n]

T = int(input())

for _ in range(T):
    k = int(input()) 
    n = int(input())  
    print(calculate_people(k, n))