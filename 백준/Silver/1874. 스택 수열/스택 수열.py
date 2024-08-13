def stack_sequence(n, sequence):
    stack = []
    result = []
    current = 1
    possible = True

    for num in sequence:
        while current <= num:
            stack.append(current)
            result.append('+')
            current += 1
        
        if stack and stack[-1] == num:
            stack.pop()
            result.append('-')
        else:
            possible = False
            break

    if possible:
        return result
    else:
        return ["NO"]

n = int(input())
sequence = [int(input()) for _ in range(n)]

result = stack_sequence(n, sequence)

for r in result:
    print(r)