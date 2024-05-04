#include <iostream>

int main()
{
    int a{},b{},c{};
    std::cin >> a >> b;
    std::cin >> c;
    
    if(b+c>=60)
    {
        a+=(b+c)/60;
        b=(b+c)%60;
        if(a>=24)
        {
            a-=24;
        }
        std::cout << a << ' ' << b;
    }
    else
    {
        std::cout << a << ' ' << b+c;
    }
}