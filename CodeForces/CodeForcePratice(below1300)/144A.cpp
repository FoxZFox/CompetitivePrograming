#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m = 0, n = INT_MAX, im, in, nn, nu;
    cin >> nn;
    for (int i = 0; i < nn; i++)
    {
        cin >> nu;
        if (nu > m)
        {
            m = nu;
            im = i;
        }
        if (nu <= n)
        {
            n = nu;
            in = i;
        }
    }
    if (im > in)
        in++;
    cout << im + (nn - 1) - in;
    return 0;
}