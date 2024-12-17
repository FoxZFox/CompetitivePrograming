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
    int l, r;
    cin >> l >> r;
    if (l == 0 && r == 0)
    {
        cout << "Not a moose ";
    }
    else if (l != r)
    {
        cout << "Odd ";
    }
    else
    {
        cout << "Even ";
    }
    if (l != 0 || r != 0)
    {
        cout << (l < r ? r * 2 : l * 2);
    }

    return 0;
}