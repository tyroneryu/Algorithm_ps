#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int rep_size{}, arr_size{};
    
    cin >> rep_size;
    arr_size = rep_size;
    
    vector<int> arr(rep_size);
    vector<double> arr1(arr_size);
    
    for(int i{0}; i<rep_size; i++)
    {
        cin >> arr[i];
    }
    
    auto max_it = max_element(arr.begin(), arr.end());
    
    for(int i{0}; i<rep_size; i++)
    {
        arr1[i] = static_cast<double>(arr[i]) / *max_it * 100;
    }
    
    double sum = accumulate(arr1.begin(), arr1.end(), 0.0);
    double average = sum / arr_size;
    
    cout << average << "\n";
}