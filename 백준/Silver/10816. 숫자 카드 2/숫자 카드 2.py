from collections import Counter

N = int(input())
cards = list(map(int, input().split()))

M = int(input())
queries = list(map(int, input().split()))

card_count = Counter(cards)

result = []
for query in queries:
    result.append(str(card_count[query]))

print(" ".join(result))
