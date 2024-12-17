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
        int x;
        cin >> x;
        cout << x << " is " << (x % 2 == 0 ? "even" : "odd") << '\n';
    }

    return 0;
}