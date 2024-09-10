#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> a;
        cout << max(n * a, n * (n + 1) / 2) << '\n';
    }
    return 0;
}