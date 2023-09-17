#include <iostream>
#include <string>
#include <bitset>

using namespace std;


class Solution {
public:
    int hammingDistance(int x, int y) {
        string x_str = bitset<32>(x).to_string();
        string y_str  = bitset<32>(y).to_string();

        int count = 0; 
        for (int xy = x_str.size(); xy >= 0; xy--)
        {
            if (x_str[xy] != y_str[xy])
                count++;
        }
        
        return count;
    }
};

int main()
{
    Solution solution;

    cout << solution.hammingDistance(3, 1) << "\n";


    return 0;
}