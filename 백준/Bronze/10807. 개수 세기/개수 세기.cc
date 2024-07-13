#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr_size{}, n{};
    cin >> arr_size;
    vector<int> arr(arr_size);
    
    for(int i{0}; i<arr_size; i++)
    {
        cin >> arr[i];
    }
    
    cin >> n;
    
    int count{0};
    
    for(int i{0}; i<arr_size; i++)
    {
        if(arr[i] == n)
        {
            count++;
        }
    }
    
    cout << count << "\n";
}