#include <iostream>

int main()
{
    int i{},n{},count{0};
    
    std::cin >> n;
    
    for(i=0; i<n+1; i++)
    {
        count+=i;
    }
    
    std::cout << count << '\n';
}