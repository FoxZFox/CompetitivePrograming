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
int romanToInt(string s)
{
    unordered_map<char, int> ro = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int ans = 0;
    for (int i = 0; i < s.length();)
    {
        if (ro[s[i]] < ro[s[i + 1]])
        {
            ans += ro[s[i + 1]] - ro[s[i]];
            i += 2;
        }
        else
        {
            ans += ro[s[i]];
            i++;
        }
    }
    return ans;
}
int main()
{
    cin.tie(0)->sync_with_stdio(false);
    cout << romanToInt("MCMXCIV");
    return 0;
}