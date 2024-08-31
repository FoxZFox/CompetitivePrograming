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
    int n, a, f = 0, s = 0;
    cin >> n;
    loop(i, 0, n)
    {
        cin >> a;
        if (a == 5)
        {
            f += 1;
        }
        else
        {
            s += 1;
        }
    }
    if (s == 0)
    {
        cout << -1;
        return 0;
    }
    if (f < 9 || s - f == 0)
    {
        cout << 0;
        return 0;
    }

    loop(i, 0, f / 9 * 9)
    {
        cout << 5;
    }
    loop(i, 0, s)
    {
        cout << 0;
    }
    return 0;
}