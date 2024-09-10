#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1000000007;

ll mod(ll x, ll y)
{
    ll result = 1;
    ll p = MOD - 2;
    while (p > 0)
    {
        if (p % 2 == 1)
        {
            result = (result * x) % y;
        }
        p /= 2;
        x = (x * x) % y;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].first >> d[i].second;
    }
    ll pd = 1;
    ll ps = 0;

    for (auto i : d)
    {
        int p = i.first;
        int q = i.second;
        int t = p + q;
        if (t < 1)
            continue;
        ll sp = p * mod(t, MOD) % MOD;
        ll sq = q * mod(t, MOD) % MOD;

        ll nd = (pd * sp + ps * sq) % MOD;
        ll ns = (pd * sq + ps * sp) % MOD;

        pd = nd;
        ps = ns;
    }
    cout << pd;

    return 0;
}