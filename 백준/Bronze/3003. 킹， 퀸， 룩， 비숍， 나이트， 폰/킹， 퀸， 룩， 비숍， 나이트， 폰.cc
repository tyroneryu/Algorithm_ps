#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<int> generateCorrectionVector(const vector<int>& a, const vector<int>& b)
{
    vector<int> c(a.size(), 0);
    
    for(int i{0}; i<6; i++)
    {
        c[i] = a[i] - b[i];
    }
    
    return c;
}

int main()
{
    vector<int> a{1, 1, 2, 2, 2, 8};
    vector<int> b(6);
    
    for(int i{0}; i<6; i++)
    {
        cin >> b[i];
    }
    
    vector<int> c = generateCorrectionVector(a, b);
    
    for(int i{0}; i<6; i++)
    {
        cout << c[i] << " ";
    }
    
    
    return 0;
}