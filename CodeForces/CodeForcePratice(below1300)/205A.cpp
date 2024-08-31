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
    int n, t, ct = INT_MAX, cc = 0, ci;
    cin >> n;
    loop(i, 0, n)
    {
        cin >> t;
        if (t == ct)
        {
            cc++;
            continue;
        }
        if (t < ct)
        {
            ct = t;
            cc = 1;
            ci = i + 1;
        }
    }
    if (cc > 1)
    {
        cout << "Still Rozdil";
        return 0;
    }
    cout << ci;
    return 0;
}