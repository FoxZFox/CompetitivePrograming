#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define llmax LONG_LONG_MAX
#define llmin LONG_LONG_MIN
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
    int n;
    cin >> n;
    int min = INT_MAX, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < min)
        {
            ans = i;
            min = a;
        }
    }
    cout << ans;

    return 0;
}