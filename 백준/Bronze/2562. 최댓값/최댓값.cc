#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr_size{9};
    vector<int> arr(arr_size);
    
    for(int i{0}; i<arr_size; i++)
    {
        cin >> arr[i];
    }
    
    auto max_it = max_element(arr.begin(), arr.end());
    
    cout << *max_it << "\n" << distance(arr.begin(), max_it) + 1 << "\n";
}