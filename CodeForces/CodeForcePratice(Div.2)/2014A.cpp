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
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int ans = 0, c = 0, a;
        while (n--)
        {
            cin >> a;
            if (a >= k)
            {
                c += a;
            }
            else if (a == 0 && c > 0)
            {
                c--;
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}