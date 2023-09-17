#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);

        if (haystack.find(needle) != string::npos)
            return pos;
        return -1;
    }
};

int main()
{
    Solution solution;

    cout << solution.strStr("atestuje","test");

    return 0;
}