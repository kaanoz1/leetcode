class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int min = 0;
    int max = nums.size() - 1;

    while (min <= max) {
        int n = max - min + 1;
        int i = min + (n / 2);
        int el = nums[i];

        if (el == target) return i;

        if (el < target) min = i + 1;
         else max = i - 1;
        
    }
    return min; 
    }
};