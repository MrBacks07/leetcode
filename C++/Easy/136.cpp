#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        for (int i: nums)
            if (count(nums.begin(), nums.end(), i) == 1)
                return i;

        return -1;  
    }
};

int main()
{
    Solution solution;

    vector<int> result = {1,2,2,2,3,3,5,3,4,1};

    cout << solution.singleNumber(result);

    return 0;
}