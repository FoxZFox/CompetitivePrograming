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
    int a, b, n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        int sum = a + (2 * b);
        if (sum % 2 != 0)
        {
            cout << "no";
        }
        else
        {
            if (a == 0 && b % 2 != 0)
            {
                cout << "no";
            }
            else
            {
                cout << "yes";
            }
        }
        cout << "\n";
    }

    return 0;
}