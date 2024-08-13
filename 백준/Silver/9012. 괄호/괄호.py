def is_vps(ps):
    stack = []
    for char in ps:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack:
                return "NO"
            stack.pop()
    
    if not stack:
        return "YES"
    else:
        return "NO"

T = int(input())
results = []

for _ in range(T):
    ps = input().strip()
    results.append(is_vps(ps))

for result in results:
    print(result)