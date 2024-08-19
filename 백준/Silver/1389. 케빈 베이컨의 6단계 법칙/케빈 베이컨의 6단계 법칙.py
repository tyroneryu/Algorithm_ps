def floyd_warshall(n, graph):
    dist = [[float('inf')] * n for _ in range(n)]
    
    for i in range(n):
        dist[i][i] = 0
    
    for u, v in graph:
        dist[u-1][v-1] = 1
        dist[v-1][u-1] = 1
    
    for k in range(n):
        for i in range(n):
            for j in range(n):
                if dist[i][j] > dist[i][k] + dist[k][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]
    
    return dist

def find_min_kevin_bacon(n, dist):
    min_bacon = float('inf')
    min_person = -1
    
    for i in range(n):
        kevin_bacon = sum(dist[i])
        if kevin_bacon < min_bacon:
            min_bacon = kevin_bacon
            min_person = i + 1  
    
    return min_person

def main():
    n, m = map(int, input().split())
    graph = [tuple(map(int, input().split())) for _ in range(m)]
    
    dist = floyd_warshall(n, graph)
    result = find_min_kevin_bacon(n, dist)
    print(result)

if __name__ == "__main__":
    main()
