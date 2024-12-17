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
    string a, b;
    string ta, tb;
    getline(cin, a);
    getline(cin, b);
    ta = a;
    tb = b;
    sort(all(a));
    sort(all(b));
    if (a != b)
    {
        cout << "NO";
        return 0;
    }
    int c = 0;
    for (size_t i = 0; i < ta.size(); i++)
    {
        if (ta[i] != tb[i])
        {
            c++;
        }
    }
    if (c <= 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}