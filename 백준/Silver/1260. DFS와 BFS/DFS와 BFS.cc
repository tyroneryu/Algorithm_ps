#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void DFS(int v, const vector<vector<int>>& graph, vector<bool>& visited) 
{
    visited[v] = true;
    cout << v << " ";

    for (int i = 0; i < graph[v].size(); ++i) 
    {
        int next = graph[v][i];
        if (!visited[next]) 
        {
            DFS(next, graph, visited);
        }
    }
}

void BFS(int start, const vector<vector<int>>& graph) 
{
    queue<int> q;
    vector<bool> visited(graph.size(), false);

    q.push(start);
    visited[start] = true;

    while (!q.empty()) 
    {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int i = 0; i < graph[v].size(); ++i) 
        {
            int next = graph[v][i];
            if (!visited[next]) 
            {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() 
{
    int N, M, V;
    cin >> N >> M >> V;

    vector<vector<int>> graph(N + 1); 

    for (int i = 0; i < M; ++i) 
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; ++i) 
    {
        sort(graph[i].begin(), graph[i].end());
    }

    vector<bool> visited(N + 1, false);

    DFS(V, graph, visited);
    cout << endl;

    BFS(V, graph);

    return 0;
}
