#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

bool isGroupWord(const string& word) 
{
    unordered_set<char> seen;
    char last_char = '\0';

    for (char ch : word) 
    {
        if (ch != last_char) {
            if (seen.count(ch) > 0) 
            {
                return false;
            }
            seen.insert(ch);
            last_char = ch;
        }
    }
    return true;
}

int main() 
{
    int n;
    cin >> n;

    vector<string> words(n);
  
    for (int i{0}; i<n; i++) 
    {
        cin >> words[i];
    }

    int groupWordCount{0};
    for (const string& word : words) 
    {
        if (isGroupWord(word)) 
        {
            groupWordCount++;
        }
    }

    cout << groupWordCount << "\n";


    return 0;
}
