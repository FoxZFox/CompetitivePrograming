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
    float x, y;
    cin >> x >> y;
    if (x == 0 && y == 1)
    {
        cout << "ALL GOOD";
    }
    else if (y == 1)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        printf("%.9f", x / (1.0 - y));
    }
    return 0;
}