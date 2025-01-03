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
        int r, e, c;
        cin >> r >> e >> c;
        if (e - c > r)
        {
            cout << "advertise";
        }
        else if (e - c == r)
        {
            cout << "does not matter";
        }
        else
        {
            cout << "do not advertise";
        }
        cout << "\n";
    }

    return 0;
}