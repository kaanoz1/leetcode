#include <vector>
#include <string>
#include <optional>

using namespace std;

class Solution
{
public:
    optional<long> a, b; // Since there is an incompatibly for this question.
    vector<string> main;

    vector<string> summaryRanges(vector<int> &nums)
    {
        unsigned char length = nums.size();

        if (length == 0)
            return main;

        for (unsigned char i = 0; i < length; i++)
        {
            long curr = nums[i];

            if (!a)
            {
                a = curr, b = curr;
                continue;
            }

            if (curr - b.value() == 1)
            {
                b = curr;
                continue;
            }
            else
            {
                print();
                --i;
                a = nullopt, b = nullopt;
            }
        }
        print();
        return main;
    }

    void print()
    {
        main.push_back(a.value() != b.value() ? (to_string(a.value()) + "->" + to_string(b.value())) : to_string(a.value()));
    }
};