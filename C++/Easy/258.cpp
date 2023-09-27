#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        string str_num = to_string(num);
        vector<int> nums;

        for (char c: str_num)
            nums.push_back(c - '0');
        
        int sum = 0;

        for (int n: nums)
            sum += n;
        
        if (sum > 9)
            return addDigits(sum);
        else
            return sum;
        
        return 0;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.addDigits(0);

    return 0;
}