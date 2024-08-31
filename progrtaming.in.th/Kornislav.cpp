#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int nums[4];
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
    sort(begin(nums), end(nums));
    cout << nums[0] * nums[2];
    return 0;
}