#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        nums1.resize(m);
        nums1.resize(m+n);

        for (int i = m, j = 0; i < m+n; i++, j++)
            nums1[i] = nums2[j];

        sort(nums1.begin(), nums1.end());
        
        n = 0;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {6,5,3};
    vector<int> nums2 = {2,1,6};

    solution.merge(nums1, 2, nums2, 2);

    return 0;
}