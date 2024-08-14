def main():
    N = int(input())
    P = list(map(int, input().split()))

    P.sort()

    total_time = 0
    accumulated_time = 0

    for time in P:
        accumulated_time += time
        total_time += accumulated_time

    print(total_time)

if __name__ == "__main__":
    main()