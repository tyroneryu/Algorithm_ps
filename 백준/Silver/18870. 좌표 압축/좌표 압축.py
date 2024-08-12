N = int(input())
coordinates = list(map(int, input().split()))

sorted_unique_coordinates = sorted(set(coordinates))

coordinate_compression = {value: idx for idx, value in enumerate(sorted_unique_coordinates)}

compressed_coordinates = [coordinate_compression[x] for x in coordinates]

print(" ".join(map(str, compressed_coordinates)))