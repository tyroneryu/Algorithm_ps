#include <iostream>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        

        int k = x;
        int valid = -1; 
        
        while (k <= M * N) 
        {
            if ((k - 1) % N + 1 == y) 
            {
                valid = k;
                break;
            }
            k += M;
        }
        
        cout << valid << "\n";
    }
    
    return 0;
}