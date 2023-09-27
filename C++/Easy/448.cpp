#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        unordered_map<int, int> mp;

        vector<int> missing_nums;

        for (int i = 1; i <= nums.size(); i++)
        {
            mp[i] = 0;
        }
        
        for (int i: nums)
            mp[i]++;
        
        for (int i = 1; i <= nums.size(); i++)
            if (mp[i] == 0)
                missing_nums.push_back(i);

        return missing_nums;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    nums = solution.findDisappearedNumbers(nums);

    for (int i: nums)
        cout << endl << i << " ";
    
    return 0;
}