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
    while (t--)
    {
        cin >> l >> r;
        int leg = 1;
        int c = l;
        int d = 1;
        while (c + d <= r)
        {
            c += d;
            d++;
            leg++;
        }
        cout << leg << "\n";
    }

    return 0;
}