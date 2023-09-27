#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        unordered_map<char, int> mp;
        string result;
        

        for (char c : t)
            if (s.find(c) != std::string::npos)
                result += c;

        cout << result << endl;
        cout << s << endl;

        return result == s;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.isSubsequence("ab", "baab");

    return 0;
}