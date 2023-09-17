#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }
        }
        return j; 
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {0,1,2,2,3,0,4,2};

    cout << endl << "Solution: " << solution.removeElement(nums, 3) << "\n";
    

    return 0;
}
