#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    int x, y;
    
    int denominator = a * e - b * d;
    
    x = (c * e - b * f) / denominator;
    y = (a * f - c * d) / denominator;
    
    cout << x << " " << y << "\n";
    
    return 0;
}