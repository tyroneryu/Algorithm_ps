#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;



int main()
{
    string input{};
    cin >> input;
    
    string reverse_input = input;
    
    reverse(reverse_input.begin(), reverse_input.end());
    
    
    
    if(input == reverse_input)
    {
        cout << "1" << "\n";
    }
    else
    {
        cout << "0" << "\n";
    }
    
    return 0;
}