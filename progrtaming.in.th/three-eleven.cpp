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
    string n;
    cin >> n;
    int ans3 = 0, ans11 = 0;
    for (auto c : n)
    {
        int t = c - '0';
        ans3 = (ans3 * 10 + t) % 3;
        ans11 = (ans11 * 10 + t) % 11;
    }
    cout << ans3 << " " << ans11 << endl;
    return 0;
}