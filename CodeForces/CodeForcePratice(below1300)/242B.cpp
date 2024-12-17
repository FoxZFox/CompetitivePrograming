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
    int n, min = INT_MAX, max = 0, ans = -1, l, r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a <= min)
        {
            min = a;
        }
        if (b >= max)
        {
            max = b;
        }
        if (a <= min && b >= max)
        {
            l = a;
            r = b;
            ans = i + 1;
        }
    }
    if (l > min || r < max)
    {
        ans = -1;
    }
    cout << ans;
    return 0;
}