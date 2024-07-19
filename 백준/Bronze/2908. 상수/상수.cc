#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

void reverseAndPrint(const string& str1, const string& str2)
{
    string reverse_str1 = str1;
    string reverse_str2 = str2;
    
    reverse(reverse_str1.begin(), reverse_str1.end());
    reverse(reverse_str2.begin(), reverse_str2.end());
    
    if(reverse_str1 < reverse_str2)
    {
        cout << reverse_str2 << "\n";
    }
    else
    {
        cout << reverse_str1 << "\n";
    }
}

int main()
{
    string str1{}, str2{};
    
    cin >> str1 >> str2;
    
    reverseAndPrint(str1, str2);
    
    return 0;
}