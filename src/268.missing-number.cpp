/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        const size_t n = nums.size();

        unsigned long long sum = n * (n + 1) / 2;
        
        for(const int num : nums)
            sum -= num;

        return sum;
    }
};
// @lc code=end

