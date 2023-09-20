#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        for (auto e: arr)
            if (std::count(arr.begin(), arr.end(), e) > arr.size()/4)
                return e;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Solution solution;

    vector<int> arr = {1,1,2,3};

    cout << solution.findSpecialInteger(arr);

    return 0;
}