#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums)
            if (!i || n > nums[i-1])
                nums[i++] = n;
        return i;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {1,1,2};

    cout << solution.removeDuplicates(nums);

    return 0;
}