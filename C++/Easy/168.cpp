#include <iostream>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;

        char tmp;

        while(columnNumber){

            columnNumber -= 1;

            tmp = 'A' + columnNumber % 26;

            res = tmp + res;

            cout << "tmp: " << tmp << "\n";
            cout << "res: " << res << "\n";


            columnNumber /= 26;

        }

        return res;
    }
};

int main()
{
    Solution solution;

    cout << solution.convertToTitle(1000);

    return 0;
}