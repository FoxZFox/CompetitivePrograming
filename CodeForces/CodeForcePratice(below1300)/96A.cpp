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
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans++;
        if (ans > 6)
            break;
        if (s[i] != s[i + 1])
        {
            ans = 0;
        }
    }
    cout << (ans >= 7 ? "YES" : "NO");
    return 0;
}