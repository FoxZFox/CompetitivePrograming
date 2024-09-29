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

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> order;
    int t = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        t = target - nums[i];
        if (order[t] == 0)
        {
            order[nums[i]] = i + 1;
            continue;
        }
        else
        {
            ans = i;
            break;
        }
    }
    return {--order[t], ans};
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<int> vec = {3, 2, 4};
    int n = 6;
    vector<int> ans = twoSum(vec, n);
    cout << ans[0] << " " << ans[1];
    return 0;
}