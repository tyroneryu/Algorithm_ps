#include <iostream>
#include <string>

using namespace std;

bool isEndNumber(int num)
{
    string s = to_string(num);
    return s.find("666") != string::npos;
}

int main()
{
    int n;
    cin >> n;
    
    int count{0};
    int currentNum{666};
    
    while (true)
    {
        if (isEndNumber(currentNum))
        {
            count++;
            if (count == n)
            {
                cout << currentNum << "\n";
                break;
            }
        }
        currentNum++;
    }
    
    return 0;
}
