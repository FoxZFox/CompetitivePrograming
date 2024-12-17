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
    multiset<char> sets;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (auto c : s1)
    {
        sets.insert(c);
    }
    for (auto c : s2)
    {
        if (c == ' ')
        {
            continue;
        }
        if (sets.count(c) > 0)
        {
            sets.erase(sets.find(c));
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}