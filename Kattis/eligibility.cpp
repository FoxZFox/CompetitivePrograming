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
        string s;
        cin >> s;
        cout << s << " ";
        cin >> s;
        s = s.substr(0, 4);
        int y = stoi(s);
        if (y >= 2010)
        {
            cout << "eligible\n";
            getline(cin, s);
            continue;
        }
        cin >> s;
        s = s.substr(0, 4);
        y = stoi(s);
        if (y >= 1991)
        {
            cout << "eligible\n";
            getline(cin, s);
            continue;
        }
        int c;
        cin >> c;
        if (c > 40)
        {
            cout << "ineligible\n";
        }
        else
        {
            cout << "coach petitions\n";
        }
    }

    return 0;
}