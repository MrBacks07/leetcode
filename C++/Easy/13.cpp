#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    unordered_map<char, int> RomansValue = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int romanToInt(string s) {
        int sum = 0, prevValue = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int currentValue = RomansValue[s[i]];

            if (currentValue < prevValue) {
                sum -= currentValue;  // Liczba większa stoi przed liczbą mniejszą
            } else {
                sum += currentValue;
            }

            prevValue = currentValue;
        }

        return sum;
    }
};

int main()
{
    Solution solution;

    cout << solution.romanToInt("MCMXCIV");


    return 0;
}