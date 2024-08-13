import math

def binomial_coefficient(N, K):
    return math.factorial(N) // (math.factorial(K) * math.factorial(N - K))

N, K = map(int, input().split())

print(binomial_coefficient(N, K))