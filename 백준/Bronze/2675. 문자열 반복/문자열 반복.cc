#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <numeric>

using namespace std;

void repeatCharacters(const string& input, int r)
{
    for(char c : input)
    {
        for(int i{0}; i<r; i++)
        {
            cout << c;
        }
    }
    cout << "\n";
}

int main()
{
    int r{}, n{};
    string input{};
    
    cin >> n;
    
    
    for(int i{0}; i<n; i++)
    {
        cin >> r;
        cin >> input;
        repeatCharacters(input, r);
    }
    
    return 0;
}