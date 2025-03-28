/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        unsigned long long int right = n;
        
        while (left < right) {

            unsigned long long int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) 
                right = mid;
            else 
                left = mid + 1;
            
        }

        return left;
    }
};
// @lc code=end

