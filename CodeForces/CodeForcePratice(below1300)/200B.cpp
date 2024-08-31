#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, n;
    float ans = 0.0f, s = 0.0f;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        s += n;
    }
    ans = s / a;
    cout << fixed << setprecision(12) << ans;
    return 0;
}