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
    int sum = 0, a1 = 0, a2 = 0;
    cin >> n;
    if (n < 2)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 100)
        {
            a1++;
        }
        else
        {
            a2++;
        }
    }
    sum = a1 * 100 + a2 * 200;
    if (sum % 200 != 0)
    {
        cout << "NO";
    }
    else if (sum / 100 % 2 != 0)
    {
        cout << "NO";
    }
    else
    {
        if (a1 % 2 != 0 || a1 == 0 && a2 % 2 == 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    return 0;
}