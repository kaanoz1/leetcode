/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
    public:
        int addDigits(int num) {
            int sum;

            do{
                sum = 0;
                while(num > 0){
                    int digit = num % 10;
                    sum += digit;
                    num /= 10;
                }
                
                num = sum;
                
            } while(sum > 9);
            
            return sum;
        }
    };
    // @lc code=end
    
    