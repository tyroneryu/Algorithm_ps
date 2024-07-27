#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> strings(5);
    
    for(int i{0}; i<5; i++)
    {
        cin >> strings[i];
    }
    
    string result;
    
    size_t maxLength{0};
    
    for(const auto& s : strings)
    {
        if(s.length() > maxLength)
        {
            maxLength = s.length();
        }
    }
    
    for(size_t col{0}; col<maxLength; col++)
    {
        for(size_t row{0}; row<5; row++)
        {
            if(col < strings[row].length()) 
            {
                result += strings[row][col];
            }
        }
    }
    
    cout << result << "\n";
    
    return 0;
}