#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int s_size = s.size();
        int t_size = t.size();

        int max_size;

        if (s_size > t_size)
            max_size = s_size;
        else
            max_size = t_size;

        for (int i = 0; i < max_size; i++)
        {
            if (s[i] != t[i])
            {
                if (s_size > t_size)
                    return s[i];
                else
                    return t[i];
            }

        }
        
        return ' ';
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.findTheDifference("", "y");

    return 0;
}