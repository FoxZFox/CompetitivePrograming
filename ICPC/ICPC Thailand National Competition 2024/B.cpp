#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string d[] = {
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"};
    string s, g, ans = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        g.pb(s[i]);
        if (s[i + 1] != s[i])
        {
            string a;
            int mod = (g[0] == '7' || g[0] == '9' ? 4 : 3);
            int t = g.size() % mod;
            if (t > 0)
                a.pb(d[g[0] - '2'][t - 1]);
            t = g.size() / mod;
            for (int i = 0; i < t; i++)
            {
                a.pb(d[g[0] - '2'][mod - 1]);
            }
            g.clear();
            ans += a;
        }
    }
    cout << ans;
    return 0;
}