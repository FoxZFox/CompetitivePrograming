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
bool isSubsequence(string s, string t)
{
    int j = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[j] == t[i])
        {
            j++;
        }
    }
    return j == s.length();
}
int main()
{
    cin.tie(0)->sync_with_stdio(false);
    cout << isSubsequence("axc", "ahbgdc");
    return 0;
}