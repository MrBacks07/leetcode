#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

class Solution {
public:
    string decodeAtIndex(string s, int k) 
    {
        int digit;
        string result;

        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
                continue;
            
            digit = s[i] - '0';

            s.erase(i, 1);

            string substring = s.substr(0, i);
            
            for (int j = 0; j < digit; j++)
                result = result + substring;

            s = s.substr(i);
            s = result + s;

            if (k <= s.size()-1 && i > k)
            {
                s = s[k-1];
                return s;
            }
            result = "";
        }
        
        s = s[k-1];
        return s;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << "OUTPUT: " << solution.decodeAtIndex("y959q969u3hb22odq595", 222280369);

    return 0;
}



//Up here is my not working solution because of Memory limits ;p

long long length = 0;
        int i = 0;
        
        while (length < k) {
            if (isdigit(s[i])) {
                length *= s[i] - '0';
            } else {
                length++;
            }
            i++;
        }
        
        for (int j = i - 1; j >= 0; j--) {
            if (isdigit(s[j])) {
                length /= s[j] - '0';
                k %= length;
            } else {
                if (k == 0 || k == length) {
                    return std::string(1, s[j]);  // Convert char to std::string
                }
                length--;
            }
        }
        
        return ""; // Default return, should never reach here given problem constraints