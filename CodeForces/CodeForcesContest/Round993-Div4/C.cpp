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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        a = min(a, m);
        b = min(b, m);
        c = min(m * 2 - (a + b), c);
        cout << a + b + c << "\n";
    }

    return 0;
}