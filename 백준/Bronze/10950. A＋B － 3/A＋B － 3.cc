#include <iostream>

int main()
{
    int i{},t{},a{},b{};
    
    std::cin >> t;
    
    for(i=0; i<t; i++)
    {
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }
}