#include <cstdint>

using namespace std;

class Solution {
public:
    int hammingWeight(int n) {


        unsigned short int result = 0;

        do
        if (n & 1)
                result++;      
         while ((n = n >> 1) > 0);
        
        return result;
    }
};
