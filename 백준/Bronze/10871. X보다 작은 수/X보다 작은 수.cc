#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr_size{}, x{};
    cin >> arr_size >> x;
    vector<int> arr(arr_size);
    
    for(int i{0}; i<arr_size; i++)
    {
        cin >> arr[i];
    }
    
    for(int i{0}; i<arr_size; i++)
    {
        if(arr[i] < x)
        {
            cout << arr[i] << " ";
        }
    }
}