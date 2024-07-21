#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

int main() 
{
    unordered_map<char, int> dialMap =
    {
        {'A', 2}, {'B', 2}, {'C', 2},
        {'D', 3}, {'E', 3}, {'F', 3},
        {'G', 4}, {'H', 4}, {'I', 4},
        {'J', 5}, {'K', 5}, {'L', 5},
        {'M', 6}, {'N', 6}, {'O', 6},
        {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7},
        {'T', 8}, {'U', 8}, {'V', 8},
        {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9}
    };

    string input;
    cin >> input;

    int total_time = 0;
    for (char c : input) 
    {
        total_time += dialMap[c] + 1;
    }

    cout << total_time << "\n";
    
    return 0;
}