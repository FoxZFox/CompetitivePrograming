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
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << (a > 0 && b > 0 && c > 0 && n >= 3 && a + b + c >= n ? "YES" : "NO");
    return 0;
}