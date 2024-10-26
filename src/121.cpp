#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        unsigned int maxProfit = 0;
        unsigned int minPrice = prices.front();

        for(unsigned int price : prices){
            if(price < minPrice) 
                minPrice = price;
            else if(price - minPrice > maxProfit) 
                maxProfit = price - minPrice;
            
        }

        return maxProfit;
    }
};
