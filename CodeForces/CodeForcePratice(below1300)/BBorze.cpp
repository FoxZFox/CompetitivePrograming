#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<string, char> m;
    m["."] = '0';
    m["-."] = '1';
    m["--"] = '2';
    string tt, ans;
    getline(cin, tt);
    for (int i = 0; i < tt.length(); i++)
    {
        if ((tt[i] == '-' && tt[i + 1] == '.') || (tt[i] == '-' && tt[i + 1] == '-'))
        {
            ans += m[tt.substr(i, 2)];
            i++;
            continue;
        }
        ans += m[tt.substr(i, 1)];
    }
    cout << ans;
    return 0;
};