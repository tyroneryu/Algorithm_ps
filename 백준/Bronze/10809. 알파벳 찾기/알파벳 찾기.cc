#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <numeric>

using namespace std;

vector<int> findAlphabetPosition(const string& input)
{
    vector<int> positions(26, -1);
    
    for(int i{0}; i<input.length(); i++)
    {
        char c = input[i];
        
        if(c>='a' && c<='z')
        {
            int index = c - 'a';
            
            if(positions[index] == -1)
            {
                positions[index] = i;
            }
        }
    }
    
    return positions;
    
}

int main()
{
    string input;
    
    cin >> input;
    
    vector<int> positions = findAlphabetPosition(input);
    
    for(int i{0}; i<positions.size(); i++)
    {
        cout << positions[i] << " ";
    }
    
    cout << "\n";
    
    return 0;
}