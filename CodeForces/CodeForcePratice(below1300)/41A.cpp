#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
#define str string
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    getline(cin, s);
    getline(cin, t);
    reverse(all(s));
    if (t == s)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}