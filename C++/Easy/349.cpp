#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;

        for (int i: nums1)
            if (find(nums2.begin(), nums2.end(), i) != nums2.end())
                if (find(result.begin(), result.end(), i) == result.end())
                    result.push_back(i);
        
        return result;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    vector<int> result = solution.intersection(nums1, nums2);

    for (auto a: result)
        cout << a << " ";
}