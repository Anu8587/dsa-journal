
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int frog_jump_cost(vector<int> &nums, int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return abs(nums[1] - nums[0]);

    int jumpOne = frog_jump_cost(nums, i - 1) + abs(nums[i] - nums[i - 1]);
    int jumpTwo = frog_jump_cost(nums, i - 2) + abs(nums[i] - nums[i - 2]);

    return min(jumpOne, jumpTwo);
}

int main()
{
    vector<int> nums = {10, 30, 40, 20};

    int res = frog_jump_cost(nums, nums.size() - 1); // Goal: reach last stone

    cout << res << endl;
    return 0;
}
