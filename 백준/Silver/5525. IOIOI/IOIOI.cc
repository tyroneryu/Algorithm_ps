#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int N, M;
    string S;
    
    cin >> N >> M;
    cin >> S;
    
    string pattern = "I";
    int count = 0, result = 0;
    
    for (int i = 0; i < M; i++) 
    {
        if (S[i] == 'I') {
            int matched = 0;
            while (i + 1 < M && S[i + 1] == 'O' && i + 2 < M && S[i + 2] == 'I') 
            {
                matched++;
                i += 2;
                if (matched == N) 
                {
                    result++;
                    matched--;
                }
            }
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
