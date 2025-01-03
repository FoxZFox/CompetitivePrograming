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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            swap(v[i], v[0]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    return 0;
}