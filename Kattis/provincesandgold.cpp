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
    int g, s, c, t = 0;
    cin >> g >> s >> c;
    t = g * 3 + s * 2 + c;
    if (t >= 2)
    {
        if (t >= 8)
        {
            cout << "Province ";
        }
        else if (t >= 5)
        {
            cout << "Duchy ";
        }
        else if (t >= 2)
        {
            cout << "Estate ";
        }
        cout << "or ";
    }
    if (t >= 6)
    {
        cout << "Gold";
    }
    else if (t >= 3)
    {
        cout << "Silver";
    }
    else
    {
        cout << "Copper";
    }
    return 0;
}