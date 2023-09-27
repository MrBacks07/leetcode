#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(str);

        int i = 0, n = pattern.size();

        for (string word; in >> word; ++i) {
            if (i == n || p2i[pattern[i]] != w2i[word])
                return false;
            p2i[pattern[i]] = w2i[word] = i + 1;
        }
        return i == n;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.wordPattern("abba", "dog cat cat fish");

    return 0;
}