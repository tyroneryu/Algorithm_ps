import math

def calculate_gcd_lcm(a, b):
    gcd = math.gcd(a, b)
    
    lcm = (a * b) // gcd
    
    return gcd, lcm

a, b = map(int, input().split())

gcd, lcm = calculate_gcd_lcm(a, b)

print(gcd)
print(lcm)