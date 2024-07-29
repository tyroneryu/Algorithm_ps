#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int charToValue(char c)
{
    if (c >= '0' && c <= '9') 
    {
        return c - '0';
    } 
    else 
    {
        return c - 'A' + 10;
    }
}

int main() 
{
    string n;
    int b;
    cin >> n >> b;

    int result {0};
    int power {0};

    for (int i = n.size() - 1; i >= 0; i--) 
    {
        int value = charToValue(n[i]);
        result += value * pow(b, power);
        power ++;
    }

    cout << result << "\n";

    return 0;
}