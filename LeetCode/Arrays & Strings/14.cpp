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

string longestCommonPrefix(vector<string> &strs)
{
    int l = 1e9;
    for (auto &x : strs)
    {
        l = min((int)x.length(), l);
    }
    for (int i = 0; i < l; i++)
    {
        for (auto &x : strs)
        {
            if (x[i] != strs[0][i])
            {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0].substr(0, l);
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<string> vc = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(vc);
    return 0;
}