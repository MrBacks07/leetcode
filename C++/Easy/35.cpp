#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        if (find(nums.begin(), nums.end(), target) == nums.end())
            nums.push_back(target);
        
        sort(nums.begin(), nums.end());

        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                index = i;
        }

        return index;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {1,3,4,6,7,8,9};

    cout << solution.searchInsert(nums, 2);

    return 0;
}