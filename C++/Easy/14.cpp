#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonPrefix = strs[0];

        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].find(commonPrefix) != 0) {
                commonPrefix = commonPrefix.substr(0, commonPrefix.length() - 1);
                if (commonPrefix.empty()) {
                    return "";
                }
            }
        }

        return commonPrefix;
    }
};

int main()
{
    Solution solution;

    vector<std::string> strings = {"flower", "flow", "flight"};

    cout << solution.longestCommonPrefix(strings);


    return 0;
}