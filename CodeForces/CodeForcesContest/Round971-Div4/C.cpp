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
    int t, x, y, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        cout << max(((x + k - 1) / k) * 2 - 1, ((y + k - 1) / k) * 2) << "\n";
    }

    return 0;
}