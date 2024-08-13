import math

def calculate_orders(N, sizes, T, P):
    total_tshirt_bundles = 0
    for size in sizes:
        total_tshirt_bundles += math.ceil(size / T)
    
    pen_bundles = N // P
    single_pens = N % P
    
    return total_tshirt_bundles, pen_bundles, single_pens

N = int(input())
sizes = list(map(int, input().split()))
T, P = map(int, input().split())

tshirt_bundles, pen_bundles, single_pens = calculate_orders(N, sizes, T, P)

print(tshirt_bundles)
print(pen_bundles, single_pens)