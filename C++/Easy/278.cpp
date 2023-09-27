#include <iostream>

using namespace std;

//LEETCODE INFO
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//LEETCODE INFO

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start = 0 ; 
        long long int end = n ; 
        long long int minBadVersion ;
         
        while (start <= end)
        {
            long long int mid = (start + end) / 2 ; 

            if (isBadVersion(mid) == 1)
            {
                minBadVersion = mid ; 
                end = mid - 1 ; 
            }
            else
            {
                start = mid + 1 ; 
            }
        }
        return minBadVersion ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;

    cout << solution.firstBadVersion(5);

    return 0;
}

