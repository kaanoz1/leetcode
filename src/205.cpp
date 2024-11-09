#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        for (unsigned short int i = 0; i < s.length(); i++)
        {
            const unsigned char charOfS = s.at(i);
            const unsigned char charOfT = t.at(i);

            if ((mapS.find(charOfS) != mapS.end() && mapS[charOfS] != charOfT) || (mapT.find(charOfT) != mapT.end() && mapT[charOfT] != charOfS))
                return false;

            mapS[charOfS] = charOfT;
            mapT[charOfT] = charOfS;
        }
        return true;
    }
};

int main()
{
    Solution *sol = new Solution();

    cout << sol->isIsomorphic("egg", "add") << endl;     // true
    cout << sol->isIsomorphic("foo", "bar") << endl;     //  false
    cout << sol->isIsomorphic("paper", "title") << endl; // true

    return 0;
}