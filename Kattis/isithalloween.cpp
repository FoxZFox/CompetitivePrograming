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
    string m, d;
    cin >> m >> d;
    cout << ((m == "OCT" && d == "31") || (m == "DEC" && d == "25") ? "yup" : "nope");
    return 0;
}