#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, c = 1, h, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> h;
        if (h > c)
        {
            ans += h - c;
            c = h;
        }
        else if (h < c)
        {
            ans += n - c + h;
            c = h;
        }
    }
    cout << ans;
    return 0;
}