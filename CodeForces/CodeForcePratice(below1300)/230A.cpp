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
    int n;
    int s, xm = 0;
    cin >> s >> n;
    vector<pair<int, int>> vec(n);
    for (auto &x : vec)
    {
        cin >> x.first >> x.second;
        xm = max(xm, x.first);
    }
    sort(all(vec));
    for (auto &x : vec)
    {
        if (s > xm)
        {
            break;
        }
        if (s > x.first)
        {
            s += x.second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}