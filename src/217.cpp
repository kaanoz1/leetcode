#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;

        for (const signed int num : nums)
        {
            if (set.count(num))
                return true;
            set.insert(num);
        }

        return false;
    }
};

int main()
{
    Solution sol;

    vector<int> test1 = {1, 2, 3, 1};
    vector<int> test2 = {1, 2, 3, 4};
    vector<int> test3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    cout << sol.containsDuplicate(test1) << endl;
    cout << sol.containsDuplicate(test2) << endl;
    cout << sol.containsDuplicate(test3) << endl;

    return 0;
}