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
    ll t;
    cin >> t;
    while (t--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        vector<ll> power;
        ll powerk = 1;
        ll ans;
        while (true)
        {
            power.push_back(powerk);
            if (powerk > r2 / k)
                break;
            powerk *= k;
        }

        cout << ans << "\n";
    }

    return 0;
}