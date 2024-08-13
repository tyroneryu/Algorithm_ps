import sys
import statistics
from collections import Counter

input = sys.stdin.read
data = list(map(int, input().split()))

N = data[0]
numbers = data[1:]

mean = round(sum(numbers) / N)

numbers.sort()
median = numbers[N // 2]

count = Counter(numbers)
most_common = count.most_common()
max_freq = most_common[0][1]

modes = [val for val, freq in most_common if freq == max_freq]

if len(modes) > 1:
    mode = sorted(modes)[1]
else:
    mode = modes[0]

range_val = max(numbers) - min(numbers)

print(mean)
print(median)
print(mode)
print(range_val)
