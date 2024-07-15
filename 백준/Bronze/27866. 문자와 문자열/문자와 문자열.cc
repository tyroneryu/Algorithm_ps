#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

int main()
{
    string str;
    int n;
    
    cin >> str >> n;
    
    if(n>=1 && n<=str.length())
    {
        char nthChar = str[n-1];
        
        cout << nthChar << "\n";
    }
    
    return 0;
}