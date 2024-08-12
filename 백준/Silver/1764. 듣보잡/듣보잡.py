import sys

input = sys.stdin.read
data = input().splitlines()

N, M = map(int, data[0].split())

unheard = {}
for name in data[1:N+1]:
    unheard[name] = True

unheard_and_unseen = []

for name in data[N+1:N+1+M]:
    if name in unheard:
        unheard_and_unseen.append(name)

unheard_and_unseen.sort()

print(len(unheard_and_unseen))
sys.stdout.write('\n'.join(unheard_and_unseen) + '\n')