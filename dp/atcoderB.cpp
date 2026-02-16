#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int frog_jump_cost(vector<int> &nums, int i, int k)
{
    if (i == 0)
        return 0;

    int minCost = INT_MAX;

    // Try all jumps from i-1 to i-k
    for (int j = 1; j <= k; ++j)
    {
        if (i - j >= 0)
        {
            int cost = frog_jump_cost(nums, i - j, k) + abs(nums[i] - nums[i - j]);
            minCost = min(minCost, cost);
        }
    }

    return minCost;
}

int main()
{
    vector<int> nums = {10, 30, 40, 50, 20}; 
    int k = 3;
    int res = frog_jump_cost(nums, nums.size() - 1, k); 

    cout << res << endl;
    return 0;
}
