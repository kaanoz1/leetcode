/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

// @lc code=start
#include <iostream>
class Solution {
public:
    void divide_while_possible(int& n, int d) {
        while(n % d == 0)
            n /= d;

    }

    bool isUgly(int n) {
        divide_while_possible(n, 2);
        divide_while_possible(n, 3);
        divide_while_possible(n, 5);
        std::cout<<n<<std::endl;
        if(n == 0) return false;
        return n == 1;
    }
};

int main(){
    Solution sol;
    std::cout<<sol.isUgly(6)<<std::endl;
    return 0;
}
// @lc code=end

