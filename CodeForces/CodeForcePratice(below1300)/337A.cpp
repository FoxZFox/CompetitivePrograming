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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, ans = 1e3;
    cin >> n >> m;
    vector<int> vec(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vec[i];
    }
    sort(all(vec));
    for (int i = 0; i < m - n + 1; i++)
    {
        ans = min(ans, vec[i + n - 1] - vec[i]);
    }
    cout << ans;
    return 0;
}