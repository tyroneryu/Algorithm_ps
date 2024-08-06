#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers(5);
    int sum{0};

    for (int i{0}; i < 5; ++i)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    int average = sum / 5;

    sort(numbers.begin(), numbers.end());

    int median = numbers[2];

    cout << average << "\n";
    cout << median << "\n";

    return 0;
}