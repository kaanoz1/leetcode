#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1); 
        

        for (int i = 1; i < rowIndex; i++) 
            for (int j = i; j > 0; j--) 
                row[j] += row[j - 1];
            
        return row;
    }
};


// I tried combination method, but due to overflow it was futile.