#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin, s);
    int l = 0, u = 0;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            ++u;
        }
        else
        {
            ++l;
        }
    }

    if (l == u || l > u)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s;
    return 0;
};