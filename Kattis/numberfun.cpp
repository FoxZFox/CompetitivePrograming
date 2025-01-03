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
    int n;
    cin >> n;
    while (n--)
    {
        float a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a - b == c || a * b == c || a / b == c || b - a == c || b / a == c)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}