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
    int n;
    float ans = 0;
    cin >> n;
    while (n--)
    {
        float q, y;
        cin >> q >> y;
        ans += q * y;
    }
    printf("%.3f", ans);

    return 0;
}