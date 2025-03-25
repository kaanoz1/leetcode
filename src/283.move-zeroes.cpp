/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        unsigned long long int count = 0;

        nums.erase(remove_if(nums.begin(), nums.end(), [&count](int x) {
            if (x == 0) 
                return (count++, true);
                 
            return false;
        }), nums.end());
        
        nums.insert(nums.end(), count, 0);
    }
};
// @lc code=end

