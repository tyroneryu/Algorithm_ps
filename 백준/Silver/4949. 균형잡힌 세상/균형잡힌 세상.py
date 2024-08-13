def check_balance(s):
    stack = []
    for char in s:
        if char in '([':
            stack.append(char)
        elif char == ')':
            if not stack or stack[-1] != '(':
                return "no"
            stack.pop()
        elif char == ']':
            if not stack or stack[-1] != '[':
                return "no"
            stack.pop()
    
    return "yes" if not stack else "no"

while True:
    line = input().rstrip()
    if line == ".":
        break
    print(check_balance(line))