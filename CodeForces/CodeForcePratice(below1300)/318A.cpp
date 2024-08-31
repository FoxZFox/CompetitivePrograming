#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define loop(a, b, c) for (int a = b; a < c; ++a)
#define loope(a, b, c) for (int a = b; a <= c; ++a)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll k, ans;
    ld n;
    cin >> n >> k;
    ll ei = round(n / 2) + 1;
    if (k < ei)
    {
        ans = 1 + 2 * (k - 1);
    }
    else
    {
        ans = 2 * (k - ei + 1);
    }
    cout << ans;

    return 0;
}