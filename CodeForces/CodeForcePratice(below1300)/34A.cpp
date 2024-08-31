#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define loop(a, b, c) for (int a = b; a < c; ++a)
#define loope(a, b, c) for (int a = b; a <= c; ++a)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m = INT_MAX;
    cin >> n;
    vector<int> vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }
    int differ;
    int ans1 = 1, ans2 = n;
    differ = abs(vec[0] - vec[n - 1]);
    m = min(m, differ);
    loop(i, 0, n)
    {
        differ = abs(vec[i] - vec[i + 1]);
        if (differ < m)
        {
            m = differ;
            ans1 = i + 1;
            ans2 = i + 2;
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}