while True:
    sides = list(map(int, input().split()))
    
    if sides == [0, 0, 0]:
        break

    sides.sort()

    if sides[0] ** 2 + sides[1] ** 2 == sides[2] ** 2:
        print("right")
    else:
        print("wrong")