def max_stair_score(n, scores):
    if n == 1:
        return scores[0]
    
    dp = [0] * n
    dp[0] = scores[0]
    if n > 1:
        dp[1] = scores[0] + scores[1]
    if n > 2:
        dp[2] = max(scores[0] + scores[2], scores[1] + scores[2])
    
    for i in range(3, n):
        dp[i] = max(dp[i-2] + scores[i], dp[i-3] + scores[i-1] + scores[i])
    
    return dp[-1]

n = int(input().strip())
scores = [int(input().strip()) for _ in range(n)]

print(max_stair_score(n, scores))