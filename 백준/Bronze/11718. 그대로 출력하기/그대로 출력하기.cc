#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string input{};
    int linecount{0};
    
    while(linecount < 100 && getline(cin, input))
    {
        cout << input << "\n";
        linecount ++;
    }
    
    return 0;
}