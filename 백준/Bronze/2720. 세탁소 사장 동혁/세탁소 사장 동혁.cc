#include <iostream>
#include <cmath>

using namespace std;

void keepYourChange(int money)
{
    int q{25}, d{10}, n{5}, p{1};
    
    int q_count{}, d_count{}, n_count{}, p_count{};
    
    q_count = money / q;
    d_count = (money % q) / d;
    n_count = ((money % q) % d) / n;
    p_count = (((money % q) % d) % n) / p;
    
    cout << q_count << " " << d_count << " " << n_count << " " << p_count << "\n";
    
}

int main()
{
    int n{};
    int money{};
    
    cin >> n;
    
    for (int i{0} ; i < n ; ++i)
    {
        cin >> money;
        keepYourChange(money);
    }
}