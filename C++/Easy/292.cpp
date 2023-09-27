#include <iostream>

using namespace std;


class Solution {
public:
    bool canWinNim(int n) {
        return !(n%4==0); 
    }
};

int main()
{
    Solution solution;

    cout << solution.canWinNim(4);

    return 0;
}