import sys

input = sys.stdin.readline

N, M = map(int, input().split())

password_dict = {}

for _ in range(N):
    site, password = input().split()
    password_dict[site] = password.strip()

for _ in range(M):
    query_site = input().strip()
    print(password_dict[query_site])
