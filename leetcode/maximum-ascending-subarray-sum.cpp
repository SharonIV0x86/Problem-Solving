// https://leetcode.com/problems/maximum-ascending-subarray-sum/
#include <iostream>
#include <vector>
#include <algorithm>
class Solution
{
public:
    int maxAscendingSum(std::vector<int> &nums)
    {
        int n = nums.size();
        int maxSum = 0;
        int tempSum = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[i - 1])
            {
                tempSum += nums[i];
            }
            else
            {
                maxSum = std::max(maxSum, tempSum);
                tempSum = nums[i];
            }
        }

        maxSum = std::max(maxSum, tempSum);

        return maxSum;
    }
};
