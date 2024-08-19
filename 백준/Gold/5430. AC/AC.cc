#include <iostream>
#include <deque>
#include <string>

using namespace std;

void solve() 
{
    string p;
    int n;
    string arr_str;
    
    cin >> p;
    cin >> n;
    cin >> arr_str;
    
    deque<int> dq;
    string num = "";
    
    for (char c : arr_str) 
    {
        if (isdigit(c)) 
        {
            num += c;
        } 
        else if (c == ',' || c == ']')
        {
            if (!num.empty()) 
            {
                dq.push_back(stoi(num));
                num.clear();
            }
        }
    }
    
    bool reverse = false;
    for (char c : p) 
    {
        if (c == 'R') 
        {
            reverse = !reverse;
        } 
        else if (c == 'D')
        {
            if (dq.empty()) 
            {
                cout << "error\n";
                return;
            }
            if (reverse) 
            {
                dq.pop_back();
            } 
            else
            {
                dq.pop_front();
            }
        }
    }

    cout << "[";
    while (!dq.empty()) 
    {
        if (reverse) 
        {
            cout << dq.back();
            dq.pop_back();
        } 
        else
        {
            cout << dq.front();
            dq.pop_front();
        }
        if (!dq.empty()) 
        {
            cout << ",";
        }
    }
    cout << "]\n";
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        solve();
    }
    
    return 0;
}