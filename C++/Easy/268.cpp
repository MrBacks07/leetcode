#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        if (nums[nums.size()-1] != nums.size())
            return nums.size();
        
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != i)
                return i;
        
        return -1;   
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1};

    Solution solution;

    cout << solution.missingNumber(nums);

    return 0;
}