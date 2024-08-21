#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int execute_D(int n) 
{
    return (2 * n) % 10000;
}

int execute_S(int n) 
{
    return (n == 0) ? 9999 : n - 1;
}

int execute_L(int n) 
{
    return (n % 1000) * 10 + n / 1000;
}

int execute_R(int n) 
{
    return (n % 10) * 1000 + n / 10;
}

string bfs(int start, int target) 
{
    vector<bool> visited(10000, false);
    queue<pair<int, string>> q;
    q.push({start, ""});
    visited[start] = true;

    while (!q.empty()) 
    {
        int current = q.front().first;
        string sequence = q.front().second;
        q.pop();

        if (current == target) 
        {
            return sequence;
        }

        int next_D = execute_D(current);
        int next_S = execute_S(current);
        int next_L = execute_L(current);
        int next_R = execute_R(current);

        if (!visited[next_D]) 
        {
            visited[next_D] = true;
            q.push({next_D, sequence + "D"});
        }
        if (!visited[next_S]) 
        {
            visited[next_S] = true;
            q.push({next_S, sequence + "S"});
        }
        if (!visited[next_L]) 
        {
            visited[next_L] = true;
            q.push({next_L, sequence + "L"});
        }
        if (!visited[next_R]) 
        {
            visited[next_R] = true;
            q.push({next_R, sequence + "R"});
        }
    }

    return "";
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int A, B;
        cin >> A >> B;
        cout << bfs(A, B) << "\n";
    }

    return 0;
}
