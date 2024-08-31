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
    int x, y, z;
    ll ans, l, w, h;
    cin >> x >> y >> z;
    l = sqrt((x * z) / y);
    w = sqrt((x * y) / z);
    h = sqrt((y * z) / x);
    ans = 4 * (l + w + h);
    cout << ans;
    return 0;
}