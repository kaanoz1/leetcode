#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> main = {{1}};

        if (numRows == 1) return main;

        main.push_back({1, 1});

        while (numRows != main.size()) {
            const vector<int>& lastRow = main.back();
            vector<int> newRow = {1}; 

            for (size_t i = 0; i < lastRow.size() - 1; ++i) 
                newRow.push_back(lastRow[i] + lastRow[i + 1]);
            
            
            newRow.push_back(1); 
            main.push_back(newRow);
        }

        return main;
    }
};