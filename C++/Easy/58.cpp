#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream strumien(s);
        while (strumien >> s)
        {

        }
        return s.length();
    }
};

int main()
{
    Solution solution;

    cout << solution.lengthOfLastWord("Ala ma kota koralowego");

    return 0;
}