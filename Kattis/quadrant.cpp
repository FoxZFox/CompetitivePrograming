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
    int x, y, q;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        q = 1;
    }
    else if (x > 0 && y < 0)
    {
        q = 4;
    }
    else if (x < 0 && y > 0)
    {
        q = 2;
    }
    else
    {
        q = 3;
    }
    cout << q;
    return 0;
}