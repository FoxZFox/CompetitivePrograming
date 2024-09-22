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
    cin.tie(0)->sync_with_stdio(false);
    ll t, n, x, y;
    cin >> t;
    while (t--)
    {
        ll ans = 0, c, r;
        cin >> n >> x >> y;
        c = min(x, y);
        r = n % c;
        c = n / c;
        if (r != 0)
        {
            ans = ++c;
        }
        else
        {
            ans = c;
        }
        cout << ans << '\n';
    }
    return 0;
}