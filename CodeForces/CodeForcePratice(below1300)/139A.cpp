#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define loop(a, b, c) for (int a = b; a < c; a++)
#define loope(a, b, c) for (int a = b; a <= c; a++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, p;
    map<int, int> d;
    cin >> n;
    loope(i, 1, 7)
    {
        cin >> p;
        d.insert({i, p});
    }
    int i = 1;
    while (1)
    {
        n -= d[i];
        if (n <= 0)
            break;
        if (i == 7)
            i = 0;
        ++i;
    }
    cout << i;
    return 0;
}