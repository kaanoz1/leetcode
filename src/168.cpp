#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        const unsigned int letterCountInAlphabet = 26;
        string s = "";

        while (columnNumber--) {
            int remainder = columnNumber % letterCountInAlphabet;
            s.insert(s.begin(), 'A' + remainder);
            columnNumber /= letterCountInAlphabet;
        }

        return s;
    }
};

//26 based number system.