#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    string str;
    int n;
    
    cin >> n;
    
    for(int i{0}; i<n; i++)
    {
        cin >> str;

        if(!str.empty())
        {
            char firstChar = str.front();
            char lastChar = str.back();
            
            cout << firstChar << lastChar << "\n";
        }
    }

    return 0;
}