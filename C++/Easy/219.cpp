#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, size_t> map;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (map.count(nums[i]))
            {
                if (i - map[nums[i]] <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    Solution solution;

    vector<int> result = {1,1,1,3,3,4,3,2,4,2};

    cout << solution.containsNearbyDuplicate(result, 2);

    return 0;
}