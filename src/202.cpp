#include <unordered_set>
#include <cmath>
#include <iostream>

using namespace std;

class Solution {
public:
    unordered_set<int> set;
    bool isHappy(int n) {
        if(n == 1)
            return true;

        unsigned int sum = 0;

        do{
            int remain = n % 10;
            sum += pow(remain, 2);
        } while ((n = n / 10) > 0);

        if(set.count(sum))
            return false;

        set.insert(sum);

        return isHappy(sum);
    }
};

/*
Here is non-recursive solution:

class Solution {
public:
    bool isHappy(int n) {
        std::set<int> nums;

        while (nums.find(n) == nums.end()) {
            nums.insert(n);
            
            n = squareOfDigits(n);
            
            if (n == 1) {
                return true;
            }
        }

        return false;
    }

    int squareOfDigits(int n) {
       int square = 0;

        while (n > 0) {
            int remainder = n % 10;
            square += remainder * remainder;
            n /= 10;
        }

        return square;
    }
};


*/