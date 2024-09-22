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
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n, m, l, r;
    char c1, c2;
    cin >> n >> m;
    cin >> s;
    while (m--)
    {
        cin >> l >> r >> c1 >> c2;
        l--;
        for (int i = l; i < r; i++)
        {
            if (s[i] == c1)
                s[i] = c2;
        }
    }
    cout << s;
    return 0;
}