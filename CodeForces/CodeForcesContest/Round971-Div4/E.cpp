#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
#define str string
using namespace std;

ll sum(ll x, ll n)
{
    ll ans = x * n;
    ans += n * (n - 1) / 2;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll h = n, l = 1;
        while (h - l > 1)
        {
            ll mid = (l + h) / 2;
            ll a = sum(k, mid);
            ll b = sum(k + mid, n - mid);

            // cout << mid << " " << a << " " << b << "\n";

            if (a > b)
            {
                h = mid;
            }
            else
            {
                l = mid;
            }
        }

        ll a = sum(k, l);
        ll b = sum(k + l, n - l);
        ll ans = abs(a - b);
        a = sum(k, h);
        b = sum(k + h, n - h);
        ans = min(ans, abs(a - b));
        cout << ans << "\n";
    }

    return 0;
}