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
    string word1, word2;
    cin >> word1 >> word2;
    string ans;
    int l = max(word1.length(), word2.length());
    for (int i = 0; i < l; i++)
    {
        if (word1.length() > i)
        {
            ans.push_back(word1[i]);
        }
        if (word2.length() > i)
        {
            ans.push_back(word2[i]);
        }
    }
    cout << ans;
    return 0;
}