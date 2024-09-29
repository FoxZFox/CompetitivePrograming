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

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n);
    int l = 1, r = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = l;
        l *= nums[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= r;
        r *= nums[i];
    }
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<int> vc = {1, 2, 3, 4};
    for (auto &x : productExceptSelf(vc))
    {
        cout << x << " ";
    }
    return 0;
}