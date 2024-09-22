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
    ll n, mn = 1e9, mx = 0, mnc = 0, mxc = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll nm;
        cin >> nm;
        if (nm > mx)
        {
            mx = nm;
            mxc = 1;
        }
        else if (nm == mx)
        {
            mxc++;
        }
        if (nm < mn)
        {
            mn = nm;
            mnc = 1;
        }
        else if (nm == mn)
        {
            mnc++;
        }
    }
    if (mn == mx)
    {
        cout << 0 << " " << n * (n - 1) / 2;
        return 0;
    }
    ll ans = mxc * mnc;
    cout << mx - mn << " " << ans;
    return 0;
}