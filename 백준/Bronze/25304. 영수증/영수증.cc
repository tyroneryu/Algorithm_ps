#include <iostream>

int main()
{
    int i{},n{},x{},a{},b{},count{};
    
    std::cin >> x >> n;
    
    for(i=0; i<n; i++)
    {
        std::cin >> a >> b;
        count+=a*b;
    }
    
    if(x==count)
    {
        std::cout << "Yes" << '\n';
    }
    else
    {
        std::cout << "No" << '\n';
    }
}