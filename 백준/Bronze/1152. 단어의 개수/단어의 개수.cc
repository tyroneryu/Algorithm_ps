#include <iostream>
#include <sstream>
#include <string>
#include <numeric>

using namespace std;

int countWords(const string& sentence)
{
    istringstream stream(sentence);
    string word;
    int count{0};
    
    while(stream >> word)
    {
        count++;
    }
    
    return count;
}

int main()
{
    string sentence;
    
    getline(cin, sentence);
    
    int wordCount = countWords(sentence);
    
    cout << wordCount;
    
    return 0;
}