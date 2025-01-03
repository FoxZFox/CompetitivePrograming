#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int a, b;
    while (scanf("%d %d", &a, &b), (a || b))
    {
        if (a + b == 13)
        {
            cout << "Never speak again.";
        }
        else if (a < b)
        {
            cout << "Left beehind.";
        }
        else if (a > b)
        {
            cout << "To the convention.";
        }
        else
        {
            cout << "Undecided.";
        }
        cout << '\n';
    }

    return 0;
}
