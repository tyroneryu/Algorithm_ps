#include <iostream>

int main()
{
    int h{}, m{};
    std::cin >> h;
    std::cin >> m;
    
    if (h==0 && m<45)
    {
        h+=23;
        m+=15;
    }
    else if (h==0 && m>=45)
    {
        m-=45;
    }
    else if (h!=0 && m<45)
    {
        h--;
        m+=15;
    }
    else if (h!=0 && m>=45)
    {
        m-=45;
    }
    
    std::cout << h << " " << m << "\n";
    
    return 0;
}