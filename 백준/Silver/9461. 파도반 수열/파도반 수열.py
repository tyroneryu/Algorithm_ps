def padovan_sequence(max_n):
    P = [0] * (max_n + 1)
    P[1] = 1
    P[2] = 1
    P[3] = 1
    P[4] = 2
    P[5] = 2

    for i in range(6, max_n + 1):
        P[i] = P[i - 1] + P[i - 5]
    
    return P

T = int(input().strip())
queries = [int(input().strip()) for _ in range(T)]

max_n = max(queries)

padovan = padovan_sequence(max_n)

for n in queries:
    print(padovan[n])