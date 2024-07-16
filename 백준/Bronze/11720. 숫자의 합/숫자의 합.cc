#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    string input{};
    int sum{0},n{};
    
    cin >> n;
    
    for(int i{0}; i<n; i++)
    {
        cin >> input;
        for(char c : input)
        {
            if(isdigit(c))
            {
                sum += c - '0';
            }
            else
            {
                return 1;
            }
        }
        cout << sum << "\n";
        
        break;
    }
}