#include <iostream>
#include <string>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M;
    cin >> M;
    
    int S = 0;  

    while (M--) 
    {
        string command;
        int x;
        cin >> command;

        if (command == "add") 
        {
            cin >> x;
            S |= (1 << (x - 1)); 
        } 
        else if (command == "remove") 
        {
            cin >> x;
            S &= ~(1 << (x - 1));  
        } 
        else if (command == "check") 
        {
            cin >> x;
            cout << ((S & (1 << (x - 1))) ? 1 : 0) << '\n';  
        } 
        else if (command == "toggle") 
        {
            cin >> x;
            S ^= (1 << (x - 1));
        }        
        else if (command == "all") 
        {
            S = (1 << 20) - 1; 
        } 
        else if (command == "empty") 
        {
            S = 0;  
        }
    }

    return 0;
}
