#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countCroatianAlphabets(const string& word)
{
    vector<string> croatianAlphabets = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    string modifiedWord = word;

    for(const string& croAlpha : croatianAlphabets)
    {
        size_t pos = 0;
        while((pos = modifiedWord.find(croAlpha, pos)) != string::npos)
        {
            modifiedWord.replace(pos, croAlpha.length(), "0");
            pos += 1;
        }
    }

    return modifiedWord.length();
}

int main()
{
    string testWord{};
    cin >> testWord;

    int result = countCroatianAlphabets(testWord);

    cout << result << "\n";

    return 0;
}