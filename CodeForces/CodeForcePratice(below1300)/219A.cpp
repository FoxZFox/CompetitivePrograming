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
    int n;
    string s;
    unordered_map<char, int> m;
    cin >> n;
    cin >> s;
    for (auto c : s)
    {
        m[c]++;
    }
    for (auto i : m)
    {
        if (i.second % n != 0)
        {
            cout << -1;
            return 0;
        }
    }
    string u;
    for (auto i : m)
    {
        u += string(i.second / n, i.first);
    }
    reverse(all(u));
    string ans = u;
    for (int i = 0; i < n - 1; i++)
    {
        ans += u;
    }
    cout << ans;
    return 0;
}