#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int digitToRemove = 0;
        int zeros = 0;

        // Używamy remove_if w połączeniu z funkcją lambda
        nums.erase(remove_if(nums.begin(), nums.end(), [digitToRemove, &zeros](int num) 
        {
            if (num == digitToRemove) {
                zeros++;
                return true;
            }
            return false;
        }), nums.end());

        for (int i = 0; i < zeros; i++)
        {
            nums.push_back(0);
        }
        
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    vector<int> nums = {0,1,0,3,12};

    solution.moveZeroes(nums);

    for (auto e: nums)
        cout << e << " ";

}