#include <iostream>

int main()
{
    int a{},b{},c{},prize{};
    std::cin >> a >> b >> c;
    
    if(a==b && b==c)
    {
        prize = 10000 + a * 1000;
    }
    else if(a==b)
    {
        prize = 1000 + a * 100;
    }
    else if(a==c)
    {
        prize = 1000 + a * 100;
    }
    else if(b==c)
    {
        prize = 1000 + b * 100;
    }
    else if(a>b && a>c)
    {
        prize = a * 100;
    }
    else if(b>a && b>c)
    {
        prize = b * 100;
    }
    else if(c>a && c>b)
    {
        prize = c * 100;
    }
    
    std::cout << prize << '\n';
    
}