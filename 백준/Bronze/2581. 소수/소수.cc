#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if(num <= 1) return false;
    if(num == 2) return true;
    if(num%2 == 0) return false;
    for(int i{3}; i<=sqrt(num); i+=2)
    {
        if(num%i == 0) return false;
    }
    return true;
}

int main()
{
    int m, n;
    cin>> m >> n;

    int sum{0};
    int minPrime{-1};

    for(int i=m; i<=n; i++)
    {
        if(isPrime(i))
        {
            if(minPrime == -1)
            {
                minPrime = i;
            }
            sum += i;
        }
    }

    if(minPrime == -1)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << sum << "\n";
        cout << minPrime << "\n";
    }

    return 0;
}