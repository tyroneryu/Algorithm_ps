import sys
input = sys.stdin.read

data = input().splitlines()
N = int(data[0])
points = []

for i in range(1, N + 1):
    x, y = map(int, data[i].split())
    points.append((x, y))

points.sort(key=lambda point: (point[1], point[0]))


for point in points:
    print(point[0], point[1])