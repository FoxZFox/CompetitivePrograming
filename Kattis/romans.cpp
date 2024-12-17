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
    double roman = 1.0877626699629171817058096415328;
    double n;
    cin >> n;
    n = n * roman * 1000;
    cout << static_cast<int>(round(n));
    return 0;
}