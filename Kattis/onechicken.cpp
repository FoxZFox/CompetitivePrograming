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
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << "Dr. Chaz needs " << n - m << " more " << (n - m > 1 ? "pieces" : "piece") << " of chicken!";
    }
    else
    {
        cout << "Dr. Chaz will have " << m - n << (m - n > 1 ? " pieces" : " piece") << " of chicken left over!";
    }
    return 0;
}