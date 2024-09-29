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

int findClosestNumber(vector<int> &nums)
{
    int ans = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (abs(nums[i]) < abs(ans))
        {
            ans = nums[i];
        }
        else if (abs(nums[i]) == abs(ans))
        {
            if (nums[i] > ans)
            {
                ans = nums[i];
            }
        }
    }
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<int> nums = {2, -1, 1};
    cout << findClosestNumber(nums);
    return 0;
}