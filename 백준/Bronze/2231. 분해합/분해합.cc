#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateDecompositionSum(int num)
{
    int sum = num;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    
    int result = 0;
    
    for (int i{1}; i < n; ++i)
    {
        if (calculateDecompositionSum(i) == n)
        {
            result = i;
            break;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
