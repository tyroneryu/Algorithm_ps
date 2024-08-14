def fibonacci_count(n):
    zero_count = [0] * (n + 1)
    one_count = [0] * (n + 1)
    
    zero_count[0] = 1
    one_count[0] = 0
    
    if n > 0:
        zero_count[1] = 0
        one_count[1] = 1
    
    for i in range(2, n + 1):
        zero_count[i] = zero_count[i - 1] + zero_count[i - 2]
        one_count[i] = one_count[i - 1] + one_count[i - 2]
    
    return zero_count, one_count

def main():
    T = int(input())
    test_cases = [int(input()) for _ in range(T)]
    max_n = max(test_cases)
    
    zero_count, one_count = fibonacci_count(max_n)
    
    for n in test_cases:
        print(zero_count[n], one_count[n])

if __name__ == "__main__":
    main()