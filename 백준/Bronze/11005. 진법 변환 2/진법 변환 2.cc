#include <iostream>
#include <string>

using namespace std;

string convertToBase(int n, int b)
{
    string result = "";
    string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (n > 0) 
    {
        int remainder = n % b;
        result = chars[remainder] + result;
        n /= b;
    }

    return result;
}

int main() 
{
    int n, b;
    cin >> n >> b;

    string result = convertToBase(n, b);
    cout << result << "\n";

    return 0;
}