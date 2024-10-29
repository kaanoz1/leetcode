#include <string>
#include <iostream>
#include <cmath>

using namespace std;

// 26 Based number system. Look the problem named: Excel Sheet Column Title

class Solution {
public:
    int titleToNumber(string columnTitle) {

        const unsigned int N = columnTitle.length();

        unsigned int sum = 0;

        for (unsigned int i = 0; i < N; i++){
            char character = columnTitle.at(N - 1 - i); //Reading values from ending.
            const unsigned int value = static_cast<int>(character - 'A') + 1;
            sum += pow(26, i) * value;
        }

        return sum;
    }
};
