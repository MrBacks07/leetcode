#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str_num = to_string(x);

        for (int i = 0, j = str_num.length(); i <= str_num.length()/2; i++, j--)
        {
            if (str_num[i] == str_num[j-1])
                continue;

            return false;
        }

        return true;
    }
};

int main()
{   
    Solution solution;

    cout << solution.isPalindrome(54845);

    return 0;
}