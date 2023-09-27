#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;

        int minPrice = prices[0]; // Minimalna cena akcji
        int maxProfit = 0; // Maksymalny zysk

        for (int i = 1; i < prices.size(); i++) 
        {
            if (prices[i] < minPrice) 
                minPrice = prices[i];
            else if (prices[i] - minPrice > maxProfit) 
                maxProfit = prices[i] - minPrice;
        }

        return maxProfit;
    }
};

int main()
{
    Solution solution;

    vector<int> prices = {7,1,5,3,6,4};

    cout << solution.maxProfit(prices);

    return 0;
}