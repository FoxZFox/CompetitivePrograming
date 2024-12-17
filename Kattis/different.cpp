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
    ll a, b;
    while (scanf("%lld %lld", &a, &b) != EOF)
    {
        cout << abs(b - a) << '\n';
    }
    return 0;
}