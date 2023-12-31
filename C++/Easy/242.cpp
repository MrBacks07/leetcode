#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size())
            return false;
            
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main()
{
    Solution solution;

    cout << solution.isAnagram("anagram", "nagaram");

    return 0;
}