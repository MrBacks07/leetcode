#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n = digits.size();
        
        int carry = 1;
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
    }
};

int main()
{
    Solution solution;
    vector<int> digits = {9,8,7,6,5,4,3,2,1,0};

    vector<int> result = solution.plusOne(digits);

    for (auto e: result)
    {
        cout << e;
    }

    return 0;
}