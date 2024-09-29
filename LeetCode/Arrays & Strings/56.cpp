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

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int s = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        s = intervals[i][0];
        e = intervals[i][1];
        while (i + 1 < n)
        {
            if (e >= intervals[i + 1][0])
            {
                e = max(e, intervals[i + 1][1]);
            }
            else
            {
                ans.push_back({s, e});
                break;
            }
            i++;
        }
    }
    ans.push_back({s, e});
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    // vector<vector<int>> vc = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    // vector<vector<int>> vc = {{1, 4}, {4, 5}};
    // vector<vector<int>> vc = {{}};
    vector<vector<int>> vc = {{1, 4}, {0, 1}};
    for (auto &x : merge(vc))
    {
        cout << x[0] << "," << x[1] << endl;
    }
    return 0;
}