#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> result;
        int temp;

        for (int i = 0; i < nums.size(); i++)
        {
            temp = i;
            
            while (i+1 < nums.size() && nums[i]+1 == nums[i+1])
                i++;

            if (temp != i)
            {
                result.push_back(to_string(nums[temp]) + "->" + to_string(nums[i]));
                continue;
            }

            result.push_back(to_string(nums[i]));

        }
        
        return result;
    }
};

int main()
{
    Solution solution;

    vector<string> result;
    vector<int> input = {-1};

    result = solution.summaryRanges(input);

    for (auto e: result)
        cout << e << "\n";

    return 0;
}