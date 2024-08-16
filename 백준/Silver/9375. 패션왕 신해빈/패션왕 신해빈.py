def calculate_outfit_cases(test_cases):
    results = []
    for clothes in test_cases:
        clothes_dict = {}
        for name, kind in clothes:
            if kind in clothes_dict:
                clothes_dict[kind] += 1
            else:
                clothes_dict[kind] = 1

        combinations = 1
        for kind in clothes_dict:
            combinations *= (clothes_dict[kind] + 1)
        
        results.append(combinations - 1)
    
    return results

t = int(input().strip())
test_cases = []

for _ in range(t):
    n = int(input().strip())
    clothes = [input().split() for _ in range(n)]
    test_cases.append(clothes)

results = calculate_outfit_cases(test_cases)
for result in results:
    print(result)
