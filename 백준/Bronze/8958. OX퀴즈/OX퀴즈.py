# 입력 받기
n = int(input())
results = []

for _ in range(n):
    quiz_result = input().strip()
    score = 0
    consecutive_o = 0
    
    for char in quiz_result:
        if char == 'O':
            consecutive_o += 1
            score += consecutive_o
        else:
            consecutive_o = 0
    
    results.append(score)

for result in results:
    print(result)
