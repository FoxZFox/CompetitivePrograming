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
    ll t, n, s = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<ll> vi(n);
        s = 0;
        for (auto &x : vi)
            cin >> x;
        for (ll i = 0; i < n - 2; i++)
        {
            s += vi[i];
        }
        cout << vi[n - 1] - vi[n - 2] + s << "\n";
    }
    return 0;
}