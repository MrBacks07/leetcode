#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        vector<char> temp;

        for (int i = s.size()-1; i >= 0; i--)
        {
            temp.push_back(s[i]);
        }

        s = temp;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char> s = {'h','e','l','l','o'};

    Solution solution;

    solution.reverseString(s);

    for (auto a: s)
        cout << a << " ";

    return 0;
}