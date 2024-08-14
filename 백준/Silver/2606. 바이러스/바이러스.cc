#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) 
{
    visited[node] = true;
    
    for (int i = 0; i < adj[node].size(); ++i) 
    {
        int next = adj[node][i];
        if (!visited[next]) 
        {
            dfs(next, adj, visited);
        }
    }
}

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);  
    vector<bool> visited(n + 1, false);  

    for (int i = 0; i < m; ++i) 
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, adj, visited);

    int infected_count = 0;
    for (int i = 2; i <= n; ++i) 
    {
        if (visited[i]) 
        {
            infected_count++;
        }
    }

    cout << infected_count << "\n";

    return 0;
}
