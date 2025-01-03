#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define llmax LONG_LONG_MAX
#define llmin LONG_LONG_MIN
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
    cin >> a;
    cin.ignore();
    cin >> b;
    if (a > b)
    {
        swap(a, b);
    }
    return 0;
}