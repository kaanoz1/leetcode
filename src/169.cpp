#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, counter = 0u;

        for (const int num : nums) {
            if (counter == 0) 
                major = num;
            
            counter += (num == major) ? 1 : -1;
        }
        return major;
    }
};