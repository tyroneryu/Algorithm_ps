def floyd_warshall(graph, n):
    for k in range(n):
        for i in range(n):
            for j in range(n):
                if graph[i][j] == 0 and (graph[i][k] == 1 and graph[k][j] == 1):
                    graph[i][j] = 1
    return graph

n = int(input())
graph = []
for _ in range(n):
    graph.append(list(map(int, input().split())))

result = floyd_warshall(graph, n)

for row in result:
    print(" ".join(map(str, row)))