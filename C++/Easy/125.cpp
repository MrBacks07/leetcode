#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        auto is_not_alphanumeric = [](char c) { return !isalnum(c); };
        s.erase(remove_if(s.begin(), s.end(), is_not_alphanumeric), s.end());
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string s_reversed = s;
        reverse(s_reversed.begin(), s_reversed.end());

        return s == s_reversed;
    }
};

int main()
{
    Solution solution;

    cout << solution.isPalindrome("kajak, ");

    return 0;
}