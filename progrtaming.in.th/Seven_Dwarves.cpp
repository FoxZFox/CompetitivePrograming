#include <iostream>

using namespace std;

int main()
{
    int nums[9];
    int sum = 0;
    for (size_t i = 0; i < 9; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }

    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = i + 1; j < 9; j++)
        {
            if (sum - (nums[i] + nums[j]) == 100)
            {
                nums[i] = -1;
                nums[j] = -1;
            }
        }
        if (nums[i] != -1)
        {
            cout << nums[i] << endl;
        }
    }

    return 0;
}