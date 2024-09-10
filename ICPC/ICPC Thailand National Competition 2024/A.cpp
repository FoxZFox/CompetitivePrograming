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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    ll ans = 0;
    cin >> n;
    for (int i = 2; i < n; i += 2)
    {
        ll t = n - i;
        ans += (t * t + t) / 2 + 1;
    }
    cout << ans;
    return 0;
}