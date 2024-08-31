#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<char> s;
    int tt;
    cin >> tt;
    while (1)
    {
        bool ans = true;
        ++tt;
        string ss = to_string(tt);
        for (char c : ss)
        {
            if (s.count(c))
            {
                ans = false;
                break;
            }
            else
            {
                s.insert(c);
            }
        }
        if (ans)
        {
            break;
        }
        s.clear();
    }
    cout << tt;
    return 0;
};