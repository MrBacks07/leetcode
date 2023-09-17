#include <iostream>
#include <string>
#include <list>

using namespace std;


class Solution {
public:
    string largestGoodInteger(string num) 
    {
        list<string> myList;
        for (int i = 0; i < 10; i++)
        {
            if (num.find(to_string(i)+to_string(i)+to_string(i)) != string::npos)
                myList.push_back(to_string(i)+to_string(i)+to_string(i));
        }       
        
        int max = INT_MIN;

        for (auto e: myList)
        {
            if (stoi(e) > max)
                max = stoi(e);
        }

        if (max == 0)
            return "000";

        if (max == INT_MIN)
            return "";

        return to_string(max);
    }
};

int main()
{
    Solution solution;

    cout << solution.largestGoodInteger("2300019888337773444");


    return 0;
}