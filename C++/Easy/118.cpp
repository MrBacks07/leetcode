#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int i = 0; i < numRows; i++) {
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

        return result;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> result;

    result = solution.generate(5);

    for (const vector<int>& innerVector : result) {
        for (int value : innerVector) {
            cout << value << " ";
        }
        cout << endl; // Nowa linia dla każdego wewnętrznego wektora.
    }

    return 0;
}