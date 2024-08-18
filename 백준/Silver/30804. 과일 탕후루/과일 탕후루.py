def max_fruit_length(n, fruits):
    fruit_count = {}
    left = 0
    max_length = 0
    
    for right in range(n):
        fruit = fruits[right]
        if fruit in fruit_count:
            fruit_count[fruit] += 1
        else:
            fruit_count[fruit] = 1

        while len(fruit_count) > 2:
            fruit_to_remove = fruits[left]
            fruit_count[fruit_to_remove] -= 1
            if fruit_count[fruit_to_remove] == 0:
                del fruit_count[fruit_to_remove]
            left += 1

        max_length = max(max_length, right - left + 1)
    
    return max_length

n = int(input())
fruits = list(map(int, input().split()))

print(max_fruit_length(n, fruits))