n = int(input()) 
log = {}

for _ in range(n):
    name, action = input().split()
    if action == "enter":
        log[name] = True  
    elif action == "leave":
        if name in log:
            del log[name]  

result = sorted(log.keys(), reverse=True)

for name in result:
    print(name)
