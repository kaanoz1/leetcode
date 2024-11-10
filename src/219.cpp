#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> set;

        for (unsigned int i = 0; i < nums.size(); i++)
        {
            const signed int num = nums.at(i);

            if (i > k)
                set.erase(nums[i - k - 1]);

            if (set.count(num))
                return true;

            set.insert(num);
        }

        return false;
    }
};