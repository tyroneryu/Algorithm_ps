def calculate_hash(L, string):
    r = 31
    M = 1234567891
    hash_value = 0
    
    for i in range(L):
        a_i = ord(string[i]) - ord('a') + 1
        hash_value += a_i * (r ** i)
    
    return hash_value % M

L = int(input())
string = input().strip()

result = calculate_hash(L, string)
print(result)