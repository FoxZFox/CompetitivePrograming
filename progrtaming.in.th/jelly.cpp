#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define llmax LONG_LONG_MAX
#define llmin LONG_LONG_MIN
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int ans = 0;
    priority_queue<int> pq;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    while (pq.top() > 1)
    {
        int t = pq.top();
        pq.pop();
        pq.push(t / 2);
        ans++;
    }
    cout << ans;
    return 0;
}