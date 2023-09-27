#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;

        for (int i = 0; i <= rowIndex; i++) {
            vector<int> innerVector;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    innerVector.push_back(1);
                } else {
                    innerVector.push_back(result[i - 1][j - 1] + result[i - 1][j]);
                }
            }
            result.push_back(innerVector);
        }

        return result[rowIndex];
    }
};

int main()
{
    Solution solution;

    vector<int> result;

    result = solution.getRow(3);

    for (int value : result) {
        cout << value << " ";
    }

    return 0;
}