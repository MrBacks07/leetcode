#include <iostream>

using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int myguess = n/2;

        while (true)
        {
            if (guess(myguess) == -1)
                myguess /= 2;
            else if (guess(myguess) == 1)
                myguess += 1;
            else
                return myguess;
        }

    }
};

int main()
{
    Solution solution;

    cout << solution.guessNumber(100);

    return 0;
}