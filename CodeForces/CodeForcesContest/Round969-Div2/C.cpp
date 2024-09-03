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
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        int m = INT_MAX, x = 0;
        cin >> n >> a >> b;
        vector<int> vec(n);
        int g = __gcd(a, b);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            vec[i] = vec[i] % g;
        }
        if (g == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        sort(all(vec));
        int ans = vec[n - 1] - vec[0];
        for (int i = 1; i < n; i++)
        {
            ans = min(ans, (vec[i - 1] + g) - vec[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}