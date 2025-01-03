#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define llmax LONG_LONG_MAX
#define llmin LONG_LONG_MIN
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n, k;
    deque<pii> q;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    q.push_back({p[0], k});
    for (int i = 1; i < n; i++)
    {
        while (!q.empty() && q.front().se < i)
        {
            q.pop_front();
        }
        p[i] += q.front().fi;
        while (!q.empty() && q.back().fi >= p[i])
        {
            q.pop_back();
        }
        q.push_back({p[i], i + k});
    }
    cout << p[n - 1];
    return 0;
}