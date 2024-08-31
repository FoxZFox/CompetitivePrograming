#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, d, e, ans;
    cin >> a >> b >> c >> d >> e;
    for (int i = 1; i <= e; i++)
    {
        if (i % a == 0)
        {
            ans++;
            continue;
        }
        if (i % b == 0)
        {
            ans++;
            continue;
        }
        if (i % c == 0)
        {

            ans++;
            continue;
        }
        if (i % d == 0)
        {
            ans++;
            continue;
        }
    }
    cout << ans;
    return 0;
}