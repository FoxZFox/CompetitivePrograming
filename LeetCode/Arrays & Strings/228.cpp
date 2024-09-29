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

vector<string> summaryRanges(vector<int> &nums)
{
    int s;
    vector<string> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        s = nums[i];
        while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1])
        {
            i++;
        }
        if (s != nums[i])
        {
            ans.push_back(to_string(s) + "->" + to_string(nums[i]));
        }
        else
        {
            ans.push_back(to_string(s));
        }
    }
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<int> vc = {-1};
    for (auto &x : summaryRanges(vc))
    {
        cout << x << endl;
    }
    return 0;
}