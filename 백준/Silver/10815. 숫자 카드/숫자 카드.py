N = int(input())
sang_cards = set(map(int, input().split()))

M = int(input()) 
check_cards = list(map(int, input().split())) 

result = []
for card in check_cards:
    if card in sang_cards:
        result.append('1')
    else:
        result.append('0')

print(' '.join(result))