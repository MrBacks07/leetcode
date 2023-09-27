#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        int i = 0;

        for (char c: s)
        {
            mp[c]++;
        }

        for (char c: s)
        {
            if (mp[c] == 1)
                return i;
            i++;
        }

        return -1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.firstUniqChar("aabb");

    return 0;
}