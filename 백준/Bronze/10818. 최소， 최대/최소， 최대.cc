#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr_size{};
    cin >> arr_size;
    vector<int> arr(arr_size);
    
    for(int i{0}; i<arr_size; i++)
    {
        cin >> arr[i];
    }
    
    auto max_it = max_element(arr.begin(), arr.end());
    auto min_it = min_element(arr.begin(), arr.end());
    
    cout << *min_it << " " << *max_it << "\n";
}