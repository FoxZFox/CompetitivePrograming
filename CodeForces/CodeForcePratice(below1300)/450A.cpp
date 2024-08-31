#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define loop(a, b, c) for (int a = b; a < c; a++)
#define loope(a, b, c) for (int a = b; a <= c; a++)
using namespace std;

int n, m, a, y, p;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    loope(i, 1, n)
    {
        cin >> a;
        if ((a + m - 1) / m >= p)
        {
            p = (a + m - 1) / m;
            y = i;
        }
    }
    cout << y;
    return 0;
}