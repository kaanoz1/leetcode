#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        int start = 0;
        int last = s.length() - 1;

        while (start <= last) {
            char currFirst = s[start];
            char currLast = s[last];

            if (!isalnum(currFirst)) 
                start++;
            else if (!isalnum(currLast)) 
                last--;
            else {
                if (tolower(currFirst) != tolower(currLast)) 
                    return false;
                
                start++;
                last--;
            }
        }

        return true;
    }
};
