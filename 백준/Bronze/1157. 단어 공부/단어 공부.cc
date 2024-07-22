#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string word{};
    cin >> word;
    
    vector<int> freq(26, 0);
    
    for(char c : word)
    {
        freq[tolower(c) - 'a']++;
    }
    
    int maxFreq = 0;
    char maxChar = '?';
    bool isTie = false;
    
    for(int i{0}; i<26; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = 'A' + i;
            isTie = false;
        }
        else if(freq[i] == maxFreq)
        {
            isTie = true;
        }
    }
    
    if(isTie)
    {
        cout << "?" << "\n";
    }
    else
    {
        cout << maxChar << "\n";
    }
    
    return 0;
}