#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution solution;
    
    std::vector<int> nums;

    for (int i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }
    

    for (auto e: solution.twoSum(nums, 9))
        cout << e;

    return 0;
}