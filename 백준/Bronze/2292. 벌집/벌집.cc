#include <iostream>

using namespace std;

int main() 
{
    long long n;
    cin >> n;
    
    if (n == 1) 
    {
        cout << 1 << "\n";

        return 0;
    }
    
    long long layer{1};
    long long total_rooms{1};
    
    while (total_rooms < n) 
    {
        total_rooms += 6 * layer;
        layer++;
    }
    
    cout << layer << "\n";
    
    return 0;
}