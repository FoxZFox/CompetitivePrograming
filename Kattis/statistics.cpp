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
    ll n;
    for (int i = 1; cin >> n; i++)
    {
        ll min = LONG_LONG_MAX, max = LONG_LONG_MIN;
        for (int i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            min = m < min ? m : min;
            max = m > max ? m : max;
        }
        cout << "Case " << i << ": " << min << " " << max << " " << max - min << "\n";
    }

    return 0;
}
