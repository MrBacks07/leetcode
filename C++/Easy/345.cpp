#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) 
    {
        vector<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        vector<char> string_vowels;

        for (char c: s)
        {
            if (find(vowels.begin(), vowels.end(), c) != vowels.end())
                string_vowels.push_back(c);
        }
        reverse(string_vowels.begin(), string_vowels.end());
        for (int i = 0, vowel = 0; i < s.size(); i++)
        {
            if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end())
            {
                s[i] = string_vowels[vowel];
                vowel++;
            }
        }

        return s;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    string s = "aA";

    cout << solution.reverseVowels(s);

    return 0;
}