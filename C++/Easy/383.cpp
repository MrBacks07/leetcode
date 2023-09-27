#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        if (ransomNote.size() > magazine.size())
            return false;
        
        for (char c: ransomNote)
        {
            if (count(ransomNote.begin(), ransomNote.end(), c) <= count(magazine.begin(), magazine.end(), c))
                continue;
            
            return false;
        }

        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.canConstruct("aa", "aab");


    return 0;
}