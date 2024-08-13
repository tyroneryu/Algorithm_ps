def manage_finances(K, numbers):
    stack = []
    for number in numbers:
        if number == 0:
            stack.pop()
        else:
            stack.append(number)
    return sum(stack)

K = int(input())
numbers = [int(input()) for _ in range(K)]

result = manage_finances(K, numbers)
print(result)