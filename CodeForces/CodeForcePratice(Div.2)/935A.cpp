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
    int n, ans = 1;
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}