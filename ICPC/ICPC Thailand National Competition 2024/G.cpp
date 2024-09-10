#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(z) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x[2], y[2], z[2], a[2], b[2], c[2];
    cin >> x[0] >> x[1];
    cin >> y[0] >> y[1];
    cin >> z[0] >> z[1];
    a[0] = x[0] + z[0] - y[0];
    a[1] = x[1] + z[1] - y[1];
    b[0] = x[0] + y[0] - z[0];
    b[1] = x[1] + y[1] - z[1];
    c[0] = y[0] + z[0] - x[0];
    c[1] = y[1] + z[1] - x[1];
    cout << a[0] << " " << a[1] << "\n";
    cout << b[0] << " " << b[1] << "\n";
    cout << c[0] << " " << c[1] << "\n";
    return 0;
}