#include <iostream>

using namespace std;

int main()
{
    int a, b, v;
    cin >> a >> b >> v;

    int days = (v - b - 1) / (a - b) + 1;

    cout << days << "\n";

    return 0;
}