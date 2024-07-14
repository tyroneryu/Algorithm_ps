#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int vec_size{10};
    vector<int> vec(vec_size);
    set<int> unique_remainders;
    
    for(int i{0}; i<vec_size; i++)
    {
        cin >> vec[i];
        unique_remainders.insert(vec[i] % 42);
    }
    
    cout << unique_remainders.size() << "\n";
    
    return 0;
}