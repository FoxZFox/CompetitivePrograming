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

int maxProfit(vector<int> &prices)
{
    int low = 1e9;
    int max = 0;
    for (auto &x : prices)
    {
        if (x < low)
        {
            low = x;
        }
        else if (x - low > max)
        {
            max = x - low;
        }
    }
    return max;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<int> vc = {2, 4, 1};
    cout << maxProfit(vc);
    return 0;
}