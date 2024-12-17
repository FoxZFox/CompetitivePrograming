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
    int x, n, p, ans = 0;
    cin >> x;
    cin >> n;
    ans = (n + 1) * x;
    while (n--)
    {
        cin >> p;
        ans -= p;
    }
    cout << ans;
    return 0;
}