#include <iostream>

int main()
{
    int i{},n{};
    
    std::cin >> n;
    
    for(i=1; i<10; i++)
    {
        std::cout << n << " * " << i << " = " << n * i << '\n';
    }
}