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
    int t, l, r;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> l >> r;
        if (l % 2 == 0)
        {
            l++;
        }
        cout << (r - l + 2) / 4 << '\n';
    }

    return 0;
}