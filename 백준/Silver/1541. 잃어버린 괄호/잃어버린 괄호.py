def minimize_expression(expression):
    parts = expression.split('-')

    initial_sum = sum(map(int, parts[0].split('+')))

    total_sum = initial_sum
    for part in parts[1:]:
        total_sum -= sum(map(int, part.split('+')))
    
    return total_sum

expression = input()

print(minimize_expression(expression))