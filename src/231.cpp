
#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && (n & (n - 1)) == 0; // Bitwise operation. Since 2^x for x ∈ N+ always return zero for n AND n - 1.
    }
};